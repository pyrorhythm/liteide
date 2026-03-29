/**************************************************************************
**
** This file is part of Qt Creator
**
** Copyright (c) 2011 Nokia Corporation and/or its subsidiary(-ies).
**
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** No Commercial Usage
**
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the Technology Preview License Agreement accompanying
** this package.
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**************************************************************************/

#ifndef MANAGER2_H
#define MANAGER2_H

#include "highlightdefinition.h"
#include "highlightdefinitionmetadata.h"

#include <QtCore/QFutureWatcher>
#include <QtCore/QHash>
#include <QtCore/QList>
#include <QtCore/QSet>
#include <QtCore/QSharedPointer>
#include <QtCore/QString>
#include <QtCore/QUrl>

QT_BEGIN_NAMESPACE
class QFileInfo;
class QIODevice;
template <class> class QFutureInterface;
template <class> class QSharedPointer;
QT_END_NAMESPACE

namespace TextEditor::Internal {

// This is the generic highlighter manager. It is not thread-safe.

class Manager2 : public QObject {
  Q_OBJECT
public:
  static Manager2 *instance();
  void loadPath(const QStringList &definitionsPaths);

public:
  QSharedPointer<HighlightDefinitionMetaData>
  parseMetadata(const QFileInfo &fileInfo);
  [[nodiscard]] QString definitionIdByName(const QString &name) const;
  [[nodiscard]] QString definitionIdByMimeType(const QString &mimeType) const;
  [[nodiscard]] QString
  definitionIdByAnyMimeType(const QStringList &mimeTypes) const;

  QSharedPointer<HighlightDefinition> definition(const QString &id);
  [[nodiscard]] QSharedPointer<HighlightDefinitionMetaData>
  definitionMetaData(const QString &id) const;
  [[nodiscard]] bool isBuildingDefinition(const QString &id) const;

public:
  [[nodiscard]] QStringList mimeTypes() const;

protected:
  QHash<QString, QString> m_idByName;
  QHash<QString, QString> m_idByMimeType;
  QHash<QString, QSharedPointer<TextEditor::Internal::HighlightDefinition>>
      m_definitions;
  QHash<QString,
        QSharedPointer<TextEditor::Internal::HighlightDefinitionMetaData>>
      m_definitionsMetaData;
  QSet<QString> m_isBuilding;
};

} // namespace TextEditor::Internal

#endif // MANAGER2_H
