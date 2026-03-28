# golangast - plugin

plugin_sources = [
  'golangastplugin.cpp',
  'golangast.cpp',
  'golangasticon.cpp',
  'astwidget.cpp',
  'golangsymbol.cpp',
  'golangastoption.cpp',
  'golangastoptionfactory.cpp',
]

plugin_headers = [
  'golangastplugin.h',
  'golangast_global.h',
  'golangast.h',
  'golangasticon.h',
  'astwidget.h',
  'golangastitem.h',
  'golangsymbol.h',
  'golangastoption.h',
  'golangastoptionfactory.h',
]

plugin_ui = [
  'golangastoption.ui',
]

plugin_resources = [
  'golangast.qrc',
]

plugin_lib = static_library('golangast',
  plugin_sources,
  plugin_headers,
  include_directories : [global_inc],
  dependencies : [qt_dep],
  link_with : [liteapp_lib],
)
