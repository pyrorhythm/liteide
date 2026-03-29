#ifndef TEXTEDITOR_SYNTAXHIGHLIGHTER_P_H
#define TEXTEDITOR_SYNTAXHIGHLIGHTER_P_H

#include "syntaxhighlighter.h"

#include <qpointer.h>
#include <qtextcursor.h>
#include <qtextobject.h>

class TextEditor::SyntaxHighlighterPrivate {
  SyntaxHighlighter *q_ptr;
  Q_DECLARE_PUBLIC(SyntaxHighlighter)
public:
  inline SyntaxHighlighterPrivate()
      : q_ptr(0), rehighlightPending(false), inReformatBlocks(false) {}

  QPointer<QTextDocument> doc;

  void _q_reformatBlocks(int from, int charsRemoved, int charsAdded);
  void reformatBlocks(int from, int charsRemoved, int charsAdded);
  void reformatBlock(const QTextBlock &block, int from, int charsRemoved,
                     int charsAdded);

  inline void rehighlight(QTextCursor &cursor,
                          QTextCursor::MoveOperation operation) {
    inReformatBlocks = true;
    cursor.beginEditBlock();
    int from = cursor.position();
    cursor.movePosition(operation);
    reformatBlocks(from, 0, cursor.position() - from);
    cursor.endEditBlock();
    inReformatBlocks = false;
  }

  inline void _q_delayedRehighlight() {
    if (!rehighlightPending)
      return;
    rehighlightPending = false;
    q_func()->rehighlight();
  }

  void applyFormatChanges(int from, int charsRemoved, int charsAdded) const;
  QVector<QTextCharFormat> formatChanges;
  QTextBlock currentBlock;
  QList<SyntaxToken> tokens;
  SyntaxComment comment;
  bool rehighlightPending;
  bool inReformatBlocks;
};

#endif // TEXTEDITOR_SYNTAXHIGHLIGHTER_P_H
