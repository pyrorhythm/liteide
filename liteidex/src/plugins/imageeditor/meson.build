# imageeditor - plugin

plugin_sources = [
  'imageeditor.cpp',
  'imageeditorfactory.cpp',
  'imageeditorfile.cpp',
  'imageeditorplugin.cpp',
  'imageeditorwidget.cpp',
]

plugin_headers = [
  'imageeditor.h',
  'imageeditor_global.h',
  'imageeditorfactory.h',
  'imageeditorfile.h',
  'imageeditorplugin.h',
  'imageeditorwidget.h',
]

plugin_resources = [
  'imageeditor.qrc',
]

plugin_lib = static_library('imageeditor',
  plugin_sources,
  plugin_headers,
  qt_resources : plugin_resources,
  include_directories : [global_inc],
  dependencies : [qt_dep, liteapp_lib],
)
