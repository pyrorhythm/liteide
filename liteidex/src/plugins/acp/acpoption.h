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
// Module: acpoption.h
// ACP Option page for plugin settings

#ifndef ACPOPTION_H
#define ACPOPTION_H

#include "liteapi/liteapi.h"
#include <QWidget>
#include <QVector>
#include <QListWidget>

class ACPOption : public LiteApi::IOption {
    Q_OBJECT
public:
    explicit ACPOption();
    ~ACPOption();

    virtual QString name() const override;
    virtual QString displayName() const override;
    virtual IOption::Type type() const override;
    virtual QWidget *widget() override;
    virtual void save() override;
    virtual void load() override;
    virtual void reset() override;

protected:
    void loadAgents();

protected slots:
    void addAgent();
    void removeAgent();

private:
    QListWidget *m_agentList;
    QListWidget *m_sessionList;
    QVector<QString> m_agentPaths;
};

#endif // ACPOPTION_H
