# golangedit - plugin

plugin_sources = [
  'golangeditplugin.cpp',
  'golangedit.cpp',
  'golangfilesearch.cpp',
  'golanghighlighter.cpp',
  'golanghighlighterfactory.cpp',
  'golangtextlexer.cpp',
  'golangeditoption.cpp',
  'golangeditoptionfactory.cpp',
  'goaddtagsdialog.cpp',
  'goplsfilesearch.cpp',
  'goremovetagsdialog.cpp',
]

plugin_headers = [
  'golangeditplugin.h',
  'golangedit_global.h',
  'golangedit.h',
  'golangfilesearch.h',
  'golanghighlighter.h',
  'golanghighlighterfactory.h',
  'golangtextlexer.h',
  'golangeditoption.h',
  'golangeditoptionfactory.h',
  'goaddtagsdialog.h',
  'goplsfilesearch.h',
  'goremovetagsdialog.h',
]

plugin_ui = [
  'golangeditoption.ui',
  'goaddtagsdialog.ui',
  'goremovetagsdialog.ui',
]

plugin_lib = static_library('golangedit',
  plugin_sources,
  plugin_headers,
  ui : plugin_ui,
  include_directories : [global_inc],
  dependencies : [qt_dep, liteapp_lib],
)
