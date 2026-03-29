/**************************************************************************
** This file is part of LiteIDE
**
** Copyright (c) 2011-2019 LiteIDE. All rights reserved.
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
** In addition, as a special exception,  that plugins developed for LiteIDE,
** are allowed to remain closed sourced and can be distributed under any license .
** These rights are included in the file LGPL_EXCEPTION.txt in this package.
**
**************************************************************************/
// Module: folderview.h
// Creator: visualfc <visualfc@gmail.com>

#ifndef FOLDERVIEW_H
#define FOLDERVIEW_H

#include <QTreeView>
#include <QFileSystemModel>
#include <QFileInfo>
#include "basefolderview.h"

class QSortFilterProxyModel;
class FileSystemModelEx;

class FolderView : public BaseFolderView
{
    Q_OBJECT
public:
    explicit FolderView(bool proxyMode, LiteApi::IApplication *app, QWidget *parent = 0);

    ~FolderView() override;
    void setRootPath(const QString &path);
    [[nodiscard]] QString rootPath() const;
    void setFilter(QDir::Filters filters);
    [[nodiscard]] QDir::Filters filter() const;
    void setNameFilters(const QStringList &filters);
    [[nodiscard]] QStringList nameFilters() const;
    [[nodiscard]] QFileInfo fileInfo(const QModelIndex &index) const override;
    [[nodiscard]] QModelIndex indexForPath(const QString &fileName) const;
    void reload();
    [[nodiscard]] bool isShowDetails() const;

    [[nodiscard]] QModelIndex findIndexForContext(const QString &filePath) const override;
    void removeIndex(const QModelIndex &index) override;
public slots:
    void setShowDetails(bool b);
public slots:
    void customContextMenuRequested(const QPoint &pos);
    void removeFolder() override;
    void removeFile() override;
protected:
    [[nodiscard]] QModelIndexList selectionCopyOrRemoveList() const override;
    QSortFilterProxyModel *m_proxy;
    FileSystemModelEx *m_model;
    QMenu             *m_contextMenu;
};

#endif // FOLDERVIEW_H
