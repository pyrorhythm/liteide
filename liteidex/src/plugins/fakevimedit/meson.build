# fakevimedit - plugin

plugin_sources = [
  'fakevimeditplugin.cpp',
  'fakevimedit.cpp',
  'fakevimeditoption.cpp',
  'fakevimeditoptionfactory.cpp',
]

plugin_headers = [
  'fakevimeditplugin.h',
  'fakevimedit_global.h',
  'fakevimedit.h',
  'fakevimeditoption.h',
  'fakevimeditoptionfactory.h',
]

plugin_ui = [
  'fakevimeditoption.ui',
]

plugin_lib = static_library('fakevimedit',
  plugin_sources,
  plugin_headers,
  include_directories : [global_inc],
  dependencies : [qt_dep],
  link_with : [liteapp_lib],
)
