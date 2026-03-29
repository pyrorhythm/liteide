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
// Module: acpoption.cpp

#include "acpoption.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGroupBox>
#include <QListWidget>
#include <QPushButton>
#include <QFileDialog>
#include <QSettings>
#include <QLabel>

#include "acpoption_global.h"

ACPOption::ACPOption()
{
    // Create UI programmatically since we don't have uic processed .ui file
    auto *mainLayout = new QVBoxLayout();

    // Agent group
    auto *agentGroup = new QGroupBox(tr("ACP Agents"));
    auto *agentLayout = new QVBoxLayout(agentGroup);

    m_agentList = new QListWidget();
    agentLayout->addWidget(m_agentList);

    auto *agentBtnLayout = new QHBoxLayout;
    auto *addBtn = new QPushButton(tr("Add Agent"));
    auto removeBtn = new QPushButton(tr("Remove"));
    agentBtnLayout->addWidget(addBtn);
    agentBtnLayout->addWidget(removeBtn);
    agentBtnLayout->addStretch();
    agentLayout->addLayout(agentBtnLayout);

    mainLayout->addWidget(agentGroup);

    // Session group
    auto *sessionGroup = new QGroupBox(tr("Active Sessions"));
    auto sessionLayout = new QVBoxLayout(sessionGroup);

    m_sessionList = new QListWidget();
    sessionLayout->addWidget(m_sessionList);

    auto *sessionBtnLayout = new QHBoxLayout;
    auto *newSessionBtn = new QPushButton(tr("New Session"));
    auto *closeSessionBtn = new QPushButton(tr("Close"));
    sessionBtnLayout->addWidget(newSessionBtn);
    sessionBtnLayout->addWidget(closeSessionBtn);
    sessionBtnLayout->addStretch();
    sessionLayout->addLayout(sessionBtnLayout);

    mainLayout->addWidget(sessionGroup);
    mainLayout->addStretch();

    connect(addBtn, &QPushButton::clicked, this, &ACPOption::addAgent);
    connect(removeBtn, &QPushButton::clicked, this, &ACPOption::removeAgent);

    loadAgents();
}

ACPOption::~ACPOption() = default;

QString ACPOption::name() const {
    return "ACP";
}

QString ACPOption::displayName() const {
    return "ACP (Agent Client Protocol)";
}

QString ACPOption::mimeType() const {
    return OPTION_AGENTPROTO;
}

QWidget *ACPOption::widget() {
    return ;
}

void ACPOption::save() {
    QSettings settings("LiteIDE", "ACP");
    settings.beginGroup("Agents");
    settings.setValue("paths", m_agentPaths);
    settings.endGroup();
}

void ACPOption::load() {
    QSettings settings("LiteIDE", "ACP");
    settings.beginGroup("Agents");
    m_agentPaths = settings.value("paths").toStringList();
    settings.endGroup();
    loadAgents();
}

void ACPOption::reset() {
    m_agentPaths.clear();
    loadAgents();
}

void ACPOption::loadAgents() {
    ui->agentList->clear();
    for (const QString &path : m_agentPaths) {
        ui->agentList->addItem(path);
    }
}

void ACPOption::addAgent() {
    QString path = QFileDialog::getOpenFileName(this, tr("Select ACP Agent"),
                                                QString(), tr("Executables (*);;All Files (*)"));
    if (!path.isEmpty()) {
        m_agentPaths.append(path);
        ui->agentList->addItem(path);
    }
}

void ACPOption::removeAgent() {
    QListWidgetItem *item = ui->agentList->currentItem();
    if (item) {
        int row = ui->agentList->row(item);
        ui->agentList->takeItem(row);
        m_agentPaths.removeAt(row);
    }
}
