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
// Module: acpapi.h
// ACP (Agent Client Protocol) API - standard protocol for IDE-agent communication

#ifndef ACPAPI_H
#define ACPAPI_H

#include "liteapi/liteapi.h"

namespace LiteApi {

// ACP Protocol Version
#define ACP_PROTOCOL_VERSION "1.0"

// ACP Message Types
enum class ACPMessageType {
    MethodRequest,    // Request expecting response
    MethodResponse,   // Response to method request
    Notification,     // One-way notification
    Error            // Error response
};

// ACP Session State
enum class ACPSessionState {
    Null,
    Initializing,
    Ready,
    Prompting,
    Cancelled,
    Error,
    Closed
};

// ACP Transport Type
enum class ACPTransportType {
    Stdio,    // Local agent via stdio
    Http,     // Remote agent via HTTP
    WebSocket // Remote agent via WebSocket
};

// ACP Progress Notification
struct ACPProgress {
    QString kind;
    QString message;
    int percentage;
};

// ACP Initialize Result
struct ACPInitializeResult {
    QString protocolVersion;
    QString agentName;
    QString agentVersion;
    QString capabilities;
};

// ACP Session Info
struct ACPSessionInfo {
    QString id;
    QString title;
    QString timestamp;
};

// ACP Prompt Options
struct ACPPromptOptions {
    bool stream;
    QString systemPrompt;
    QVariantMap variables;
};

// ACP Result
struct ACPResult {
    bool success;
    QString error;
    QVariant data;
};

// IACPClient - Main ACP client interface
class IACPClient : public QObject {
    Q_OBJECT
public:
    virtual ~IACPClient() {}

    // Connection management
    virtual void connectToAgent(const QString &agentPath, ACPTransportType type = ACPTransportType::Stdio) = 0;
    virtual void disconnect() = 0;
    virtual bool isConnected() const = 0;

    // Session management
    virtual QString createSession() = 0;
    virtual void loadSession(const QString &sessionId) = 0;
    virtual void closeSession(const QString &sessionId) = 0;
    virtual QList<ACPSessionInfo> listSessions() const = 0;

    // Prompting
    virtual void sendPrompt(const QString &sessionId, const QString &prompt, const ACPPromptOptions &opts = ACPPromptOptions()) = 0;
    virtual void cancelPrompt(const QString &sessionId) = 0;

    // Updates
    virtual void sendUpdate(const QString &sessionId, const QString &method, const QVariantMap &params) = 0;

signals:
    void connected();
    void disconnected();
    void error(const QString &error);
    void sessionCreated(const QString &sessionId);
    void sessionClosed(const QString &sessionId);
    void sessionLoaded(const QString &sessionId);
    void promptResponse(const QString &sessionId, const ACPResult &result);
    void promptProgress(const QString &sessionId, const ACPProgress &progress);
    void promptComplete(const QString &sessionId);
};

// IACPClientFactory - Factory for creating ACP clients
class IACPClientFactory : public QObject {
    Q_OBJECT
public:
    virtual ~IACPClientFactory() {}

    virtual IACPClient *createClient(QObject *parent = nullptr) = 0;
    virtual QStringList supportedAgents() const = 0;
};

} // namespace LiteApi

#endif // ACPAPI_H
