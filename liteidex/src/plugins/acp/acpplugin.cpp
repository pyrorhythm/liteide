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
// Module: acpplugin.cpp

#include "acpplugin.h"
#include "acpclient.h"
#include "acpoption.h"

#include <QNetworkAccessManager>

ACPPlugin::ACPPlugin()
    : m_liteApp(nullptr)
    , m_client(nullptr)
    , m_network(nullptr)
{
}

ACPPlugin::~ACPPlugin() {
    if (m_client) {
        m_client->disconnect();
        delete m_client;
    }
    delete m_network;
}

QStringList ACPPlugin::depends() const {
    return QStringList() << "liteapi";
}

bool ACPPlugin::load(LiteApi::IApplication *app) {
    m_liteApp = app;

    // Create network manager for HTTP transport
    m_network = new QNetworkAccessManager(this);

    // Create ACP client
    m_client = new ACPClient(m_network, this);

    // Connect signals
    connect(m_client, &ACPClient::connected, this, &ACPPlugin::connected);
    connect(m_client, &ACPClient::disconnected, this, &ACPPlugin::disconnected);
    connect(m_client, &ACPClient::errorOccurred, this, &ACPPlugin::error);
    connect(m_client, &ACPClient::sessionCreated, this, &ACPPlugin::sessionCreated);
    connect(m_client, &ACPClient::promptResponse, this, &ACPPlugin::promptResponse);
    connect(m_client, &ACPClient::promptProgress, this, &ACPPlugin::promptProgress);
    connect(m_client, &ACPClient::promptComplete, this, &ACPPlugin::promptComplete);

    // Create menu entries
    createMenu();

    // Create tool window
    createToolWindow();

    // Register option page
    ACPOption *option = new ACPOption;
    app->addOptionPage(option);

    return true;
}

void ACPPlugin::createMenu() {
    // Create ACP menu under Tools
    // TODO: Add menu items for ACP session management
}

void ACPPlugin::createToolWindow() {
    // Create ACP session tool window
    // TODO: Add tool window for ACP
}

void ACPPlugin::connected() {
    m_liteApp->appendLog("ACP", "Connected to agent", false);
}

void ACPPlugin::disconnected() {
    m_liteApp->appendLog("ACP", "Disconnected from agent", false);
}

void ACPPlugin::error(const QString &err) {
    m_liteApp->appendLog("ACP", err, true);
}

void ACPPlugin::sessionCreated(const QString &sessionId) {
    m_liteApp->appendLog("ACP", QString("Session created: %1").arg(sessionId), false);
}

void ACPPlugin::promptResponse(const QString &sessionId, const LiteApi::ACPResult &result) {
    if (result.success) {
        m_liteApp->appendLog("ACP", QString("Prompt response for %1").arg(sessionId), false);
    } else {
        m_liteApp->appendLog("ACP", QString("Prompt error for %1: %2").arg(sessionId, result.error), true);
    }
}

void ACPPlugin::promptProgress(const QString &sessionId, const LiteApi::ACPProgress &progress) {
    // Update progress UI
}

void ACPPlugin::promptComplete(const QString &sessionId) {
    m_liteApp->appendLog("ACP", QString("Prompt complete for %1").arg(sessionId), false);
}
