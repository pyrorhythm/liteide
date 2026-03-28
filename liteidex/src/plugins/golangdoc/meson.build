# golangdoc - plugin

plugin_sources = [
  'golangdocplugin.cpp',
  'golangdoc.cpp',
  'golangdocoptionfactory.cpp',
  'golangdocoption.cpp',
  'finddocwidget.cpp',
  'findapiwidget.cpp',
]

plugin_headers = [
  'golangdocplugin.h',
  'golangdoc_global.h',
  'golangdoc.h',
  'golangdocoptionfactory.h',
  'golangdocoption.h',
  'finddocwidget.h',
  'findapiwidget.h',
]

plugin_ui = [
  'golangdocoption.ui',
]

plugin_lib = static_library('golangdoc',
  plugin_sources,
  plugin_headers,
  include_directories : [global_inc],
  dependencies : [qt_dep],
  link_with : [liteapp_lib],
)
