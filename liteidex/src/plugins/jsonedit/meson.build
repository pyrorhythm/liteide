# jsonedit - plugin

plugin_sources = [
  'jsoneditplugin.cpp',
  'jsonedit.cpp',
]

plugin_headers = [
  'jsoneditplugin.h',
  'jsonedit_global.h',
  'jsonedit.h',
]

plugin_lib = static_library('jsonedit',
  plugin_sources,
  plugin_headers,
  include_directories : [global_inc],
  dependencies : [qt_dep],
  link_with : [liteapp_lib],
)
