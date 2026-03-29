# utils - LiteIDE utility libraries

# Combine all utils modules into a single static library for simplicity
# This avoids complex dependency tracking between utils modules

liteutils_sources = [
  'colorstyle/colorstyle.cpp',
  'dlvclient/dlvclient.cpp',
  'dlvclient/varianthelper.cpp',
  'documentbrowser/documentbrowser.cpp',
  'documentbrowser/documentbrowserfactory.cpp',
  'editorutil/editorutil.cpp',
  'extension/extension.cpp',
  'filesystem/filesystemmodel.cpp',
  'filesystem/filesystemwidget.cpp',
  'fileutil/fileutil.cpp',
  'fileutil/findfilesthread.cpp',
  'folderview/abstractmultiproxymodel.cpp',
  'folderview/basefolderview.cpp',
  'folderview/dirsortfilterproxymodel.cpp',
  'folderview/filesystemmodelex.cpp',
  'folderview/folderdialog.cpp',
  'folderview/folderlistmodel.cpp',
  'folderview/folderlistview.cpp',
  'folderview/folderview.cpp',
  'folderview/multifoldermodel.cpp',
  'folderview/multifolderview.cpp',
  'folderview/multiindexmodel.cpp',
  'golangapi/golangapi.cpp',
  'gotools/gotools.cpp',
  'htmlutil/htmlutil.cpp',
  'iconutil/iconutil.cpp',
  'mimetype/mimetype.cpp',
  'modelproject/modelfileimpl.cpp',
  'modelproject/modelprojectimpl.cpp',
  'navigate/navigate.cpp',
  'processex/processex.cpp',
  'symboltreeview/symboltreeview.cpp',
  'tabwidget/litetabwidget.cpp',
  'textoutput/terminaledit.cpp',
  'textoutput/textoutput.cpp',
  # qtc_texteditor - text editor base classes (KateHighlighter, SyntaxHighlighter, etc.)
  '../3rdparty/qtc_texteditor/tabsettings.cpp',
  '../3rdparty/qtc_texteditor/syntaxhighlighter.cpp',
  '../3rdparty/qtc_texteditor/itexteditor.cpp',
  '../3rdparty/qtc_texteditor/basetextdocumentlayout.cpp',
  '../3rdparty/qtc_texteditor/generichighlighter/specificrules.cpp',
  '../3rdparty/qtc_texteditor/generichighlighter/rule.cpp',
  '../3rdparty/qtc_texteditor/generichighlighter/progressdata.cpp',
  '../3rdparty/qtc_texteditor/generichighlighter/keywordlist.cpp',
  '../3rdparty/qtc_texteditor/generichighlighter/itemdata.cpp',
  '../3rdparty/qtc_texteditor/generichighlighter/includerulesinstruction.cpp',
  '../3rdparty/qtc_texteditor/generichighlighter/highlighter.cpp',
  '../3rdparty/qtc_texteditor/generichighlighter/highlightdefinitionmetadata.cpp',
  '../3rdparty/qtc_texteditor/generichighlighter/highlightdefinitionhandler.cpp',
  '../3rdparty/qtc_texteditor/generichighlighter/highlightdefinition.cpp',
  '../3rdparty/qtc_texteditor/generichighlighter/dynamicrule.cpp',
  '../3rdparty/qtc_texteditor/generichighlighter/context.cpp',
  '../3rdparty/qtc_texteditor/katehighlighter.cpp',
  '../3rdparty/qtc_texteditor/generichighlighter/manager2.cpp',
  '../3rdparty/qtc_texteditor/colorscheme.cpp',
  '../3rdparty/qtc_texteditor/autocompleter.cpp',
  '../3rdparty/qtc_texteditor/basetextblockselection.cpp',
  # treemodelcompleter - auto-complete model
  '../3rdparty/treemodelcompleter/treemodelcompleter.cpp',
  # elidedlabel - text ellipsis widget
  '../3rdparty/elidedlabel/elidedlabel.cpp',
  # qtc_editutil - Qt Creator edit utilities
  '../3rdparty/qtc_editutil/fancylineedit.cpp',
  '../3rdparty/qtc_editutil/filterlineedit.cpp',
  '../3rdparty/qtc_editutil/uncommentselection.cpp',
]

liteutils_headers = [
  'colorstyle/colorstyle.h',
  'dlvclient/dlvclient.h',
  # qtc_texteditor headers (for KateHighlighter/SyntaxHighlighter)
  '../3rdparty/qtc_texteditor/katehighlighter.h',
  # syntaxhighlighter.h uses Q_PRIVATE_SLOT - MOC output must compile
  # in the same TU as the .cpp (via moc_sources below) so it can see
  # the SyntaxHighlighterPrivate class definition.
  # '../3rdparty/qtc_texteditor/syntaxhighlighter.h',
  '../3rdparty/qtc_texteditor/basetextdocumentlayout.h',
  '../3rdparty/qtc_texteditor/generichighlighter/manager2.h',
  '../3rdparty/qtc_texteditor/generichighlighter/highlighter.h',
  '../3rdparty/qtc_texteditor/generichighlighter/manager.h',
  '../3rdparty/qtc_texteditor/generichighlighter/highlightdefinition.h',
  '../3rdparty/qtc_texteditor/generichighlighter/highlightdefinitionmetadata.h',
  '../3rdparty/qtc_texteditor/generichighlighter/highlightdefinitionhandler.h',
  '../3rdparty/qtc_texteditor/generichighlighter/itemdata.h',
  '../3rdparty/qtc_texteditor/generichighlighter/keywordlist.h',
  '../3rdparty/qtc_texteditor/generichighlighter/rule.h',
  '../3rdparty/qtc_texteditor/generichighlighter/context.h',
  '../3rdparty/qtc_texteditor/generichighlighter/dynamicrule.h',
  '../3rdparty/qtc_texteditor/generichighlighter/progressdata.h',
  '../3rdparty/qtc_texteditor/generichighlighter/reuse.h',
  '../3rdparty/qtc_texteditor/generichighlighter/specificrules.h',
  '../3rdparty/qtc_texteditor/generichighlighter/includerulesinstruction.h',
  '../3rdparty/qtc_texteditor/generichighlighter/highlighterexception.h',
  '../3rdparty/qtc_texteditor/colorscheme.h',
  '../3rdparty/qtc_texteditor/texteditor_global.h',
  '../3rdparty/qtc_texteditor/texteditorconstants.h',
  '../3rdparty/qtc_texteditor/itexteditor.h',
  '../3rdparty/qtc_texteditor/autocompleter.h',
  '../3rdparty/qtc_texteditor/basetextblockselection.h',
  '../3rdparty/qtc_texteditor/tabsettings.h',
  # treemodelcompleter
  '../3rdparty/treemodelcompleter/treemodelcompleter.h',
  # elidedlabel
  '../3rdparty/elidedlabel/elidedlabel.h',
  # qtc_editutil
  '../3rdparty/qtc_editutil/fancylineedit.h',
  '../3rdparty/qtc_editutil/filterlineedit.h',
  '../3rdparty/qtc_editutil/uncommentselection.h',
  '../3rdparty/qtc_editutil/utils_global.h',
  'dlvclient/dlvtypes.h',
  'dlvclient/varianthelper.h',
  'documentbrowser/documentbrowser.h',
  'documentbrowser/documentbrowserfactory.h',
  'editorutil/checkdata.h',
  'editorutil/difflib.h',
  'editorutil/editorutil.h',
  'editorutil/libucd.h',
  'extension/extension.h',
  'filesystem/filesystemmodel.h',
  'filesystem/filesystemwidget.h',
  'fileutil/fileutil.h',
  'fileutil/findfilesthread.h',
  'folderview/abstractmultiproxymodel_p.h',
  'folderview/abstractmultiproxymodel.h',
  'folderview/basefolderview.h',
  'folderview/dirsortfilterproxymodel.h',
  'folderview/filesystemmodelex.h',
  'folderview/folderdialog.h',
  'folderview/folderlistmodel.h',
  'folderview/folderlistview.h',
  'folderview/folderview.h',
  'folderview/multifoldermodel.h',
  'folderview/multifolderview.h',
  'folderview/multiindexmodel_p.h',
  'folderview/multiindexmodel.h',
  'golangapi/golangapi.h',
  'gotools/gotools.h',
  'gotools/libgopher.h',
  'htmlutil/htmlutil.h',
  'iconutil/iconutil.h',
  'mimetype/mimetype.h',
  'modelproject/modelfileimpl.h',
  'modelproject/modelprojectimpl.h',
  'navigate/navigate.h',
  'processex/processex.h',
  'symboltreeview/symboltreeview.h',
  'tabwidget/litetabwidget.h',
  'textoutput/terminaledit.h',
  'textoutput/textoutput.h',
]

# Conditionally add mac-specific source
if host_machine.system() == 'darwin'
  liteutils_sources += 'fileutil/fileutil_mac.mm'
endif

# vterm has complex dependencies on libvterm/ptyqt - skip for now
# 'vterm/vtermwidget.cpp',
# 'vterm/vtermwidgetbase.cpp',

# Generate MOC files for Q_OBJECT classes
qt6_dep = dependency('qt6', modules: ['Core', 'Gui', 'Widgets'], required: false)
liteutils_generated = []
if qt6_dep.found()
  qt6_mod = import('qt6')
  liteutils_generated = qt6_mod.preprocess(
    moc_headers: liteutils_headers,
    moc_sources: [
      '../3rdparty/qtc_texteditor/syntaxhighlighter.cpp',
    ],
  )
endif

liteutils_lib = static_library('liteutils',
  liteutils_sources,
  liteutils_headers,
  liteutils_generated,
  include_directories : global_inc,
  dependencies : [qt_dep],
)