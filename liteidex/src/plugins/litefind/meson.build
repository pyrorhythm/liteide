# litefind - plugin

plugin_sources = [
  'litefindplugin.cpp',
  'filesearch.cpp',
  'findeditor.cpp',
  'filesearchmanager.cpp',
  'replacedocument.cpp',
]

plugin_headers = [
  'litefindplugin.h',
  'litefind_global.h',
  'filesearch.h',
  'findeditor.h',
  'filesearchmanager.h',
  'replacedocument.h',
]

plugin_lib = static_library('litefind',
  plugin_sources,
  plugin_headers,
  include_directories : [global_inc],
  dependencies : [qt_dep, liteapp_lib],
)
