# liteeditor - plugin

plugin_sources = [
  'liteeditorplugin.cpp',
  'liteeditor.cpp',
  'liteeditorfile.cpp',
  'liteeditorfilefactory.cpp',
  'liteeditoroption.cpp',
  'liteeditoroptionfactory.cpp',
  'liteeditorwidgetbase.cpp',
  'liteeditorwidget.cpp',
  'litecompleter.cpp',
  'litewordcompleter.cpp',
  'liteeditormark.cpp',
  'highlightermanager.cpp',
  'katehighlighterfactory.cpp',
  'codecompleter.cpp',
  'functiontooltip.cpp',
  'faketooltip.cpp',
  'snippetapi.cpp',
  'wordapi.cpp',
  'editorapimanager.cpp',
  'katetextlexer.cpp',
]

plugin_headers = [
  'liteeditorplugin.h',
  'liteeditor_global.h',
  'liteeditor.h',
  'liteeditorfile.h',
  'liteeditorfilefactory.h',
  'liteeditoroption.h',
  'liteeditoroptionfactory.h',
  'liteeditorwidgetbase.h',
  'liteeditorwidget.h',
  'litecompleter.h',
  'litewordcompleter.h',
  'liteeditormark.h',
  'highlightermanager.h',
  'katehighlighterfactory.h',
  'codecompleter.h',
  'functiontooltip.h',
  'faketooltip.h',
  'snippetapi.h',
  'wordapi.h',
  'editorapimanager.h',
  'katetextlexer.h',
]

plugin_ui = [
  'liteeditoroption.ui',
]

plugin_resources = [
  'liteeditor.qrc',
]

plugin_lib = static_library('liteeditor',
  plugin_sources,
  plugin_headers,
  ui : plugin_ui,
  qt_resources : plugin_resources,
  include_directories : [global_inc],
  dependencies : [qt_dep, liteapp_lib],
)
