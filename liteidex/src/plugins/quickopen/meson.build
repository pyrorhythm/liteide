# quickopen - plugin

plugin_sources = [
  'quickopenplugin.cpp',
  'quickopenwidget.cpp',
  'quickopenmanager.cpp',
  'quickopenfiles.cpp',
  'quickopenlines.cpp',
  'quickopenhelp.cpp',
  'quickopeneditor.cpp',
  'quickopenmimetype.cpp',
  'quickopenoption.cpp',
  'quickopenoptionfactory.cpp',
  'quickopenaction.cpp',
  'quickopenfolder.cpp',
  'quickopenfilesystem.cpp',
]

plugin_headers = [
  'quickopenplugin.h',
  'quickopen_global.h',
  'quickopenwidget.h',
  'quickopenmanager.h',
  'quickopenfiles.h',
  'quickopenlines.h',
  'quickopenhelp.h',
  'quickopeneditor.h',
  'quickopenmimetype.h',
  'quickopenoption.h',
  'quickopenoptionfactory.h',
  'quickopenaction.h',
  'quickopenfolder.h',
  'quickopenfilesystem.h',
]

plugin_ui = [
  'quickopenoption.ui',
]

plugin_lib = static_library('quickopen',
  plugin_sources,
  plugin_headers,
  ui : plugin_ui,
  include_directories : [global_inc],
  dependencies : [qt_dep, liteapp_lib],
)
