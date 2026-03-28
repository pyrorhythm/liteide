/**************************************************************************
** This file is part of LiteIDE
**
** Copyright (c) 2024 LiteIDE. All rights reserved.
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License as published by the Free Software Foundation; either
** version 2.1 of the License, or (at your option) any later version.
**
** This library is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** Lesser General Public License for more details.
**
** In addition, as a special exception, that plugins developed for LiteIDE,
** are allowed to remain closed sourced and can be distributed under any license.
** These rights are included in the file LGPL_EXCEPTION.txt in this package.
**
**************************************************************************/
// Module: acpclient.cpp

#include "acpclient.h"
#include <QCoreApplication>
#include <QProcess>
#include <QDebug>
#include <QBuffer>
#include <QTimer>

// StdioTransport implementation
StdioTransport::StdioTransport(QObject *parent)
    : ACPTransport(parent)
    , m_process(new QProcess(this))
    , m_messageId(0)
{
    connect(m_process, &QProcess::readyReadStandardOutput, this, &StdioTransport::processReadyRead);
    connect(m_process, &QProcess::readyReadStandardError, this, &StdioTransport::processReadyRead);
    connect(m_process, static_cast<void(QProcess::*)(QProcess::ProcessError)>(&QProcess::errorOccurred),
            this, &StdioTransport::processError);
    connect(m_process, static_cast<void(QProcess::*)(int,QProcess::ExitStatus)>(&QProcess::finished),
            this, &StdioTransport::processFinished);
}

StdioTransport::~StdioTransport() {
    close();
}

void StdioTransport::connectToAgent(const QString &agentPath) {
    QStringList args = agentPath.split(' ');
    QString program = args.takeFirst();
    m_process->setProgram(program);
    m_process->setArguments(args);
    m_process->start();
    if (m_process->waitForStarted()) {
        emit connected();
    }
}

void StdioTransport::send(const QJsonObject &message) {
    QJsonDocument doc(message);
    QByteArray data = doc.toJson(QJsonDocument::Compact) + "\n";
    m_process->write(data);
    m_process->flush();
}

void StdioTransport::close() {
    if (m_process->state() != QProcess::NotRunning) {
        m_process->terminate();
        m_process->waitForFinished(1000);
        if (m_process->state() != QProcess::NotRunning) {
            m_process->kill();
        }
    }
    emit disconnected();
}

void StdioTransport::parseMessages(const QByteArray &data) {
    m_buffer.append(data);
    while (m_buffer.contains('\n')) {
        int idx = m_buffer.indexOf('\n');
        QByteArray line = m_buffer.left(idx).trimmed();
        m_buffer = m_buffer.mid(idx + 1);
        if (line.isEmpty()) continue;
        QJsonParseError error;
        QJsonDocument doc = QJsonDocument::fromJson(line, &error);
        if (error.error == QJsonParseError::NoError) {
            emit messageReceived(doc.object());
        }
    }
}

void StdioTransport::processReadyRead() {
    parseMessages(m_process->readAllStandardOutput());
    parseMessages(m_process->readAllStandardError());
}

void StdioTransport::processError(QProcess::ProcessError error) {
    emit error(QString("Process error: %1").arg(error));
}

void StdioTransport::processFinished(int exitCode, QProcess::ExitStatus exitStatus) {
    Q_UNUSED(exitCode)
    if (exitStatus == QProcess::CrashExit) {
        emit error("Process crashed");
    }
    emit disconnected();
}

// HttpTransport implementation
HttpTransport::HttpTransport(QNetworkAccessManager *nam, QObject *parent)
    : ACPTransport(parent)
    , m_nam(nam)
    , m_messageId(0)
{
}

HttpTransport::~HttpTransport() {
    close();
}

void HttpTransport::connectToUrl(const QUrl &url) {
    m_url = url;
    emit connected();
}

void HttpTransport::send(const QJsonObject &message) {
    QJsonDocument doc(message);
    QByteArray data = doc.toJson(QJsonDocument::Compact);

    QNetworkRequest request(m_url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QNetworkReply *reply = m_nam->post(request, data);
    connect(reply, &QNetworkReply::finished, this, [this, reply]() {
        replyFinished(reply);
        reply->deleteLater();
    });
}

void HttpTransport::close() {
    m_url.clear();
    emit disconnected();
}

void HttpTransport::replyFinished(QNetworkReply *reply) {
    if (reply->error() != QNetworkReply::NoError) {
        emit error(reply->errorString());
        return;
    }
    QByteArray data = reply->readAll();
    QJsonParseError error;
    QJsonDocument doc = QJsonDocument::fromJson(data, &error);
    if (error.error == QJsonParseError::NoError) {
        emit messageReceived(doc.object());
    }
}

// ACPClient implementation
ACPClient::ACPClient(QNetworkAccessManager *nam, QObject *parent)
    : QObject(parent)
    , m_transport(nullptr)
    , m_network(nam)
    , m_requestId(0)
    , m_initialized(false)
{
}

ACPClient::~ACPClient() {
    disconnect();
}

void ACPClient::connectToAgent(const QString &agentPath, LiteApi::ACPTransportType type) {
    if (m_transport) {
        disconnect();
    }

    if (type == LiteApi::ACPTransportType::Stdio) {
        StdioTransport *stdio = new StdioTransport(this);
        m_transport = stdio;
        connect(stdio, &StdioTransport::messageReceived, this, &ACPClient::notificationReceived);
        connect(stdio, &StdioTransport::connected, this, &ACPClient::connected);
        connect(stdio, &StdioTransport::disconnected, this, &ACPClient::disconnected);
        connect(stdio, &StdioTransport::error, this, &ACPClient::error);
        stdio->connectToAgent(agentPath);
    } else {
        HttpTransport *http = new HttpTransport(m_network, this);
        m_transport = http;
        connect(http, &HttpTransport::messageReceived, this, &ACPClient::notificationReceived);
        connect(http, &HttpTransport::connected, this, &ACPClient::connected);
        connect(http, &HttpTransport::disconnected, this, &ACPClient::disconnected);
        connect(http, &HttpTransport::error, this, &ACPClient::error);
        http->connectToUrl(agentPath);
    }

    // Send initialize request
    QJsonObject params;
    params["protocolVersion"] = ACP_PROTOCOL_VERSION;
    params["clientInfo"] = QJsonObject({
        {"name", "liteide"},
        {"version", "1.0"}
    });

    int reqId = ++m_requestId;
    m_pendingRequests[reqId] = "";
    QJsonObject request = createRequest("initialize", params);
    m_transport->send(request);

    // Set a timeout for initialization
    QTimer::singleShot(5000, this, [this, reqId]() {
        if (m_pendingRequests.contains(reqId)) {
            m_pendingRequests.remove(reqId);
            emit error("Initialization timeout");
        }
    });
}

void ACPClient::disconnect() {
    if (m_transport) {
        m_transport->close();
        delete m_transport;
        m_transport = nullptr;
    }
    m_initialized = false;
    m_sessions.clear();
}

bool ACPClient::isConnected() const {
    return m_transport && m_transport->isConnected() && m_initialized;
}

QString ACPClient::createSession() {
    if (!isConnected()) return "";

    QJsonObject params;
    int reqId = ++m_requestId;
    QString sessionId = QString("session_%1").arg(reqId);
    m_pendingRequests[reqId] = sessionId;

    QJsonObject request = createRequest("session/new", params);
    m_transport->send(request);
    return sessionId;
}

void ACPClient::loadSession(const QString &sessionId) {
    if (!isConnected()) return;

    QJsonObject params;
    params["sessionId"] = sessionId;
    int reqId = ++m_requestId;
    m_pendingRequests[reqId] = sessionId;

    QJsonObject request = createRequest("session/load", params);
    m_transport->send(request);
}

void ACPClient::closeSession(const QString &sessionId) {
    if (!isConnected()) return;

    QJsonObject params;
    params["sessionId"] = sessionId;
    int reqId = ++m_requestId;

    QJsonObject request = createRequest("session/close", params);
    m_transport->send(request);
    m_sessions.remove(sessionId);
}

QList<LiteApi::ACPSessionInfo> ACPClient::listSessions() const {
    QList<LiteApi::ACPSessionInfo> list;
    for (auto it = m_sessions.begin(); it != m_sessions.end(); ++it) {
        LiteApi::ACPSessionInfo info;
        info.id = it.key();
        list.append(info);
    }
    return list;
}

void ACPClient::sendPrompt(const QString &sessionId, const QString &prompt, const LiteApi::ACPPromptOptions &opts) {
    if (!isConnected()) return;

    QJsonObject params;
    params["sessionId"] = sessionId;
    params["prompt"] = prompt;
    if (opts.stream) {
        params["stream"] = true;
    }
    if (!opts.systemPrompt.isEmpty()) {
        params["systemPrompt"] = opts.systemPrompt;
    }
    if (!opts.variables.isEmpty()) {
        params["variables"] = QJsonObject::fromVariantMap(opts.variables);
    }

    int reqId = ++m_requestId;
    m_pendingRequests[reqId] = sessionId;
    m_sessions[sessionId] = LiteApi::ACPSessionState::Prompting;

    QJsonObject request = createRequest("session/prompt", params);
    m_transport->send(request);
}

void ACPClient::cancelPrompt(const QString &sessionId) {
    if (!isConnected()) return;

    QJsonObject params;
    params["sessionId"] = sessionId;
    int reqId = ++m_requestId;

    QJsonObject request = createRequest("session/cancel", params);
    m_transport->send(request);
    m_sessions[sessionId] = LiteApi::ACPSessionState::Cancelled;
}

void ACPClient::sendUpdate(const QString &sessionId, const QString &method, const QVariantMap &params) {
    if (!isConnected()) return;

    QJsonObject p;
    p["sessionId"] = sessionId;
    for (auto it = params.begin(); it != params.end(); ++it) {
        p[it.key()] = QJsonValue::fromVariant(it.value());
    }

    QJsonObject request = createRequest(method, p);
    m_transport->send(request);
}

QJsonObject ACPClient::createRequest(const QString &method, const QVariantMap &params) {
    QJsonObject request;
    request["jsonrpc"] = "2.0";
    request["id"] = ++m_requestId;
    request["method"] = method;
    if (!params.isEmpty()) {
        request["params"] = QJsonObject::fromVariantMap(params);
    }
    return request;
}

void ACPClient::notificationReceived(const QJsonObject &msg) {
    // Check if it's a response to one of our requests
    if (msg.contains("id")) {
        handleResponse(msg);
    } else if (msg.contains("method")) {
        handleNotification(msg);
    }
}

void ACPClient::handleResponse(const QJsonObject &resp) {
    int id = resp["id"].toInt();
    QString sessionId = m_pendingRequests.take(id);

    if (resp.contains("result")) {
        QJsonObject result = resp["result"].toObject();

        // Handle initialize response
        if (result.contains("protocolVersion")) {
            m_initialized = true;
            emit connected();
        }

        // Handle session responses
        if (!sessionId.isEmpty()) {
            if (result.contains("sessionId")) {
                m_sessions[result["sessionId"].toString()] = LiteApi::ACPSessionState::Ready;
                emit sessionCreated(result["sessionId"].toString());
            }
        }
    } else if (resp.contains("error")) {
        QJsonObject error = resp["error"].toObject();
        emit error(error["message"].toString());
    }
}

void ACPClient::handleNotification(const QJsonObject &notif) {
    QString method = notif["method"].toString();
    QJsonObject params = notif["params"].toObject();

    if (method == "window/progress") {
        LiteApi::ACPProgress progress;
        progress.kind = params["kind"].toString();
        progress.message = params["message"].toString();
        progress.percentage = params["percentage"].toInt();
        QString sessionId = params["sessionId"].toString();
        emit promptProgress(sessionId, progress);
    } else if (method == "session/promptComplete") {
        QString sessionId = params["sessionId"].toString();
        m_sessions[sessionId] = LiteApi::ACPSessionState::Ready;
        emit promptComplete(sessionId);
    }
}
