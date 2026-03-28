# liteenv - plugin

plugin_sources = [
  'liteenvplugin.cpp',
  'envmanager.cpp',
  'liteenvoptionfactory.cpp',
  'liteenvoption.cpp',
  'goenvmanager.cpp',
]

plugin_headers = [
  'liteenvplugin.h',
  'liteenv_global.h',
  'envmanager.h',
  'liteenvoptionfactory.h',
  'liteenvoption.h',
  'goenvmanager.h',
]

plugin_ui = [
  'liteenvoption.ui',
]

plugin_resources = [
  'liteenv.qrc',
]

plugin_lib = static_library('liteenv',
  plugin_sources,
  plugin_headers,
  ui : plugin_ui,
  qt_resources : plugin_resources,
  include_directories : [global_inc],
  dependencies : [qt_dep, liteapp_lib],
)
