# rustedit - plugin

plugin_sources = [
  'rusteditplugin.cpp',
  'rustedit.cpp',
]

plugin_headers = [
  'rusteditplugin.h',
  'rustedit_global.h',
  'rustedit.h',
]

plugin_lib = static_library('rustedit',
  plugin_sources,
  plugin_headers,
  include_directories : [global_inc],
  dependencies : [qt_dep],
  link_with : [liteapp_lib],
)
