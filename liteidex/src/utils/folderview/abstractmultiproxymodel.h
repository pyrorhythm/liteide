/**************************************************************************
** This file is part of LiteIDE
**
** Copyright (c) 2011-2017 LiteIDE. All rights reserved.
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
** are allowed to remain closed sourced and can be distributed under any license
*.
** These rights are included in the file LGPL_EXCEPTION.txt in this package.
**
**************************************************************************/
// Module: abstractmultiproxymodel.h
// Creator: visualfc <visualfc@gmail.com>

#ifndef ABSTRACTMULTIPROXYMODEL_H
#define ABSTRACTMULTIPROXYMODEL_H

#include <QAbstractItemModel>
#include <QItemSelection>
#include <cstddef>

class AbstractMultiProxyModelPrivate;

struct SourceModelIndex {
  SourceModelIndex() : model(nullptr) {}
  SourceModelIndex(QAbstractItemModel *m, const QModelIndex &i)
      : model(m), index(i) {}
  bool isValid() const { return model != nullptr && index.isValid(); }
  QAbstractItemModel *model;
  QModelIndex index;
};

class AbstractMultiProxyModel : public QAbstractItemModel {
  Q_OBJECT

public:
  AbstractMultiProxyModel(QObject *parent = 0);
  ~AbstractMultiProxyModel();

  virtual bool addSourceModel(QAbstractItemModel *sourceModel,
                              const QModelIndex &sourceIndex);
  virtual bool removeSourceModel(QAbstractItemModel *sourceModel);
  virtual void removeAllSourceModel();

  [[nodiscard]] QList<SourceModelIndex> sourceModelIndexlList() const;
  [[nodiscard]] QList<QAbstractItemModel *> sourceModelList() const;

  [[nodiscard]] virtual QModelIndex mapToSource(const QModelIndex &proxyIndex) const = 0;
  [[nodiscard]] virtual QModelIndex mapFromSource(const QModelIndex &sourceIndex) const = 0;

  [[nodiscard]] virtual SourceModelIndex
  mapToSourceEx(const QModelIndex &proxyIndex) const = 0;
  virtual QModelIndex mapFromSourceEx(QAbstractItemModel *sourceModel,
                                      const QModelIndex &sourceIndex) const = 0;

  [[nodiscard]] virtual QItemSelection
  mapSelectionToSource(const QItemSelection &selection) const;
  [[nodiscard]] virtual QItemSelection
  mapSelectionFromSource(const QItemSelection &selection) const;

  bool submit() override;
  void revert() override;

  [[nodiscard]] QVariant data(const QModelIndex &proxyIndex,
                int role = Qt::DisplayRole) const override;
  [[nodiscard]] QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
  [[nodiscard]] QMap<int, QVariant> itemData(const QModelIndex &index) const override;
  [[nodiscard]] Qt::ItemFlags flags(const QModelIndex &index) const override;

  bool setData(const QModelIndex &index, const QVariant &value,
               int role = Qt::EditRole) override;
  bool setItemData(const QModelIndex &index, const QMap<int, QVariant> &roles) override;
  bool setHeaderData(int section, Qt::Orientation orientation,
                     const QVariant &value, int role = Qt::EditRole) override;

  [[nodiscard]] QModelIndex buddy(const QModelIndex &index) const override;
  bool canFetchMore(const QModelIndex &parent) const override;
  void fetchMore(const QModelIndex &parent) override;
  void sort(int column, Qt::SortOrder order = Qt::AscendingOrder) override;
  [[nodiscard]] QSize span(const QModelIndex &index) const override;
  [[nodiscard]] bool hasChildren(const QModelIndex &parent = QModelIndex()) const override;

  [[nodiscard]] QMimeData *mimeData(const QModelIndexList &indexes) const override;
  [[nodiscard]] QStringList mimeTypes() const override;
  [[nodiscard]] Qt::DropActions supportedDropActions() const override;

protected:
  AbstractMultiProxyModel(AbstractMultiProxyModelPrivate &, QObject *parent);

private:
  Q_DECLARE_PRIVATE(AbstractMultiProxyModel)
  Q_DISABLE_COPY(AbstractMultiProxyModel)
protected:
  AbstractMultiProxyModelPrivate *d_ptr;
};

#endif // ABSTRACTMULTIPROXYMODEL_H

