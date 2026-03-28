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
// Module: acpclient.h
// ACP Client implementation

#ifndef ACPCLIENT_H
#define ACPCLIENT_H

#include "acpapi/acpapi.h"
#include <QObject>
#include <QProcess>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMap>

class ACPTransport {
public:
    virtual ~ACPTransport() {}
    virtual void send(const QJsonObject &message) = 0;
    virtual void close() = 0;
    virtual bool isConnected() const = 0;

signals:
    virtual void messageReceived(const QJsonObject &message) = 0;
    virtual void error(const QString &error) = 0;
    virtual void connected() = 0;
    virtual void disconnected() = 0;
};

// Stdio transport for local agents
class StdioTransport : public ACPTransport {
    Q_OBJECT
public:
    explicit StdioTransport(QObject *parent = nullptr);
    ~StdioTransport();

    void connectToAgent(const QString &agentPath);
    virtual void send(const QJsonObject &message) override;
    virtual void close() override;
    virtual bool isConnected() const override { return m_process && m_process->state() == QProcess::Running; }

signals:
    void messageReceived(const QJsonObject &message) override;
    void error(const QString &error) override;
    void connected() override;
    void disconnected() override;

protected slots:
    void processReadyRead();
    void processError(QProcess::ProcessError error);
    void processFinished(int exitCode, QProcess::ExitStatus exitStatus);

private:
    void parseMessages(const QByteArray &data);

private:
    QProcess *m_process;
    QByteArray m_buffer;
    int m_messageId;
};

// Http transport for remote agents
class HttpTransport : public ACPTransport {
    Q_OBJECT
public:
    explicit HttpTransport(QNetworkAccessManager *nam, QObject *parent = nullptr);
    ~HttpTransport();

    void connectToUrl(const QUrl &url);
    virtual void send(const QJsonObject &message) override;
    virtual void close() override;
    virtual bool isConnected() const override { return m_url.isValid(); }

signals:
    void messageReceived(const QJsonObject &message) override;
    void error(const QString &error) override;
    void connected() override;
    void disconnected() override;

protected slots:
    void replyFinished(QNetworkReply *reply);

private:
    QNetworkAccessManager *m_nam;
    QUrl m_url;
    int m_messageId;
};

class ACPClient : public QObject, public LiteApi::IACPClient {
    Q_OBJECT
    Q_INTERFACES(LiteApi::IACPClient)
public:
    explicit ACPClient(QNetworkAccessManager *nam, QObject *parent = nullptr);
    ~ACPClient();

    // LiteApi::IACPClient interface
    virtual void connectToAgent(const QString &agentPath, LiteApi::ACPTransportType type = LiteApi::ACPTransportType::Stdio) override;
    virtual void disconnect() override;
    virtual bool isConnected() const override;

    virtual QString createSession() override;
    virtual void loadSession(const QString &sessionId) override;
    virtual void closeSession(const QString &sessionId) override;
    virtual QList<LiteApi::ACPSessionInfo> listSessions() const override;

    virtual void sendPrompt(const QString &sessionId, const QString &prompt, const LiteApi::ACPPromptOptions &opts = LiteApi::ACPPromptOptions()) override;
    virtual void cancelPrompt(const QString &sessionId) override;
    virtual void sendUpdate(const QString &sessionId, const QString &method, const QVariantMap &params) override;

signals:
    void connected() override;
    void disconnected() override;
    void error(const QString &err) override;
    void sessionCreated(const QString &sessionId) override;
    void sessionClosed(const QString &sessionId) override;
    void sessionLoaded(const QString &sessionId) override;
    void promptResponse(const QString &sessionId, const LiteApi::ACPResult &result) override;
    void promptProgress(const QString &sessionId, const LiteApi::ACPProgress &progress) override;
    void promptComplete(const QString &sessionId) override;

    // Internal signals for transport
    void responseReceived(const QJsonObject &resp);
    void notificationReceived(const QJsonObject &notif);

protected:
    void handleResponse(const QJsonObject &resp);
    void handleNotification(const QJsonObject &notif);
    QJsonObject createRequest(const QString &method, const QVariantMap &params);

private:
    ACPTransport *m_transport;
    QNetworkAccessManager *m_network;
    int m_requestId;
    QMap<int, QString> m_pendingRequests; // requestId -> sessionId
    QMap<QString, LiteApi::ACPSessionState> m_sessions;
    QString m_currentSessionId;
    bool m_initialized;
};

#endif // ACPCLIENT_H
