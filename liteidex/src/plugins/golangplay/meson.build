# golangplay - plugin

plugin_sources = [
  'golangplayplugin.cpp',
  'goplaybrowser.cpp',
]

plugin_headers = [
  'golangplayplugin.h',
  'golangplay_global.h',
  'goplaybrowser.h',
]

plugin_lib = static_library('golangplay',
  plugin_sources,
  plugin_headers,
  include_directories : [global_inc],
  dependencies : [qt_dep, liteapp_lib],
)
