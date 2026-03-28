# bookmarks - plugin

plugin_sources = [
  'bookmarksplugin.cpp',
  'bookmarkmanager.cpp',
  'bookmarkmodel.cpp',
]

plugin_headers = [
  'bookmarksplugin.h',
  'bookmarks_global.h',
  'bookmarkmanager.h',
  'bookmarkmodel.h',
]

plugin_resources = [
  'bookmarks.qrc',
]

plugin_lib = static_library('bookmarks',
  plugin_sources,
  plugin_headers,
  include_directories : [global_inc],
  dependencies : [qt_dep],
  link_with : [liteapp_lib],
)
