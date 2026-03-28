# terminal - plugin

plugin_sources = [
  'terminalplugin.cpp',
  'terminal.cpp',
  'terminaloption.cpp',
  'terminaloptionfactory.cpp',
]

plugin_headers = [
  'terminalplugin.h',
  'terminal_global.h',
  'terminal.h',
  'terminaloption.h',
  'terminaloptionfactory.h',
]

plugin_ui = [
  'terminaloption.ui',
]

plugin_lib = static_library('terminal',
  plugin_sources,
  plugin_headers,
  ui : plugin_ui,
  include_directories : [global_inc],
  dependencies : [qt_dep, liteapp_lib],
)
