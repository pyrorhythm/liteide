# welcome - plugin

plugin_sources = [
  'welcomeplugin.cpp',
  'welcomebrowser.cpp',
  'litedoc.cpp',
]

plugin_headers = [
  'welcomeplugin.h',
  'welcome_global.h',
  'welcomebrowser.h',
  'litedoc.h',
]

plugin_resources = [
  'welcome.qrc',
]

plugin_lib = static_library('welcome',
  plugin_sources,
  plugin_headers,
  qt_resources : plugin_resources,
  include_directories : [global_inc],
  dependencies : [qt_dep, liteapp_lib],
)
