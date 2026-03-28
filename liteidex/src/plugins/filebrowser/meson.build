# filebrowser - plugin

plugin_sources = [
  'filebrowserplugin.cpp',
  'filebrowser.cpp',
  'filebrowseroptionfactory.cpp',
  'filebrowseroption.cpp',
]

plugin_headers = [
  'filebrowserplugin.h',
  'filebrowser_global.h',
  'filebrowser.h',
  'filebrowseroptionfactory.h',
  'filebrowseroption.h',
]

plugin_ui = [
  'filebrowseroption.ui',
]

plugin_resources = [
  'filebrowser.qrc',
]

plugin_lib = static_library('filebrowser',
  plugin_sources,
  plugin_headers,
  include_directories : [global_inc],
  dependencies : [qt_dep],
  link_with : [liteapp_lib],
)
