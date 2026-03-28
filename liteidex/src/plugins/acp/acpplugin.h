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
// Module: acpplugin.h
// ACP Plugin - Agent Client Protocol integration

#ifndef ACPPLUGIN_H
#define ACPPLUGIN_H

#include "liteapi/liteapi.h"
#include "acpapi/acpapi.h"

class ACPOption;
class ACPClient;
class QNetworkAccessManager;

class ACPPlugin : public LiteApi::IPlugin {
    Q_OBJECT
    Q_INTERFACES(LiteApi::IPlugin)
public:
    ACPPlugin();
    ~ACPPlugin();

    virtual bool load(LiteApi::IApplication *app) override;
    virtual QStringList depends() const override;

public slots:
    void connected();
    void disconnected();
    void error(const QString &error);
    void sessionCreated(const QString &sessionId);
    void promptResponse(const QString &sessionId, const LiteApi::ACPResult &result);
    void promptProgress(const QString &sessionId, const LiteApi::ACPProgress &progress);
    void promptComplete(const QString &sessionId);

protected:
    void createMenu();
    void createToolWindow();

private:
    LiteApi::IApplication *m_liteApp;
    ACPClient *m_client;
    QNetworkAccessManager *m_network;
};

class ACPPluginFactory : public LiteApi::IPluginFactoryT<ACPPlugin> {
    Q_OBJECT
    Q_INTERFACES(LiteApi::IPluginFactory)
    Q_PLUGIN_METADATA(IID "liteidex.acp.plugin/1.0")
public:
    ACPPluginFactory() {}
    virtual ~ACPPluginFactory() {}
};

#endif // ACPPLUGIN_H
