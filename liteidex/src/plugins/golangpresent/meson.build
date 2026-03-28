# golangpresent - plugin

plugin_sources = [
  'golangpresentedit.cpp',
  'golangpresentplugin.cpp',
  'exportdialog.cpp',
]

plugin_headers = [
  'golangpresent_global.h',
  'golangpresentedit.h',
  'golangpresentplugin.h',
  'exportdialog.h',
]

plugin_ui = [
  'exportdialog.ui',
]

plugin_resources = [
  'golangpresent.qrc',
]

plugin_lib = static_library('golangpresent',
  plugin_sources,
  plugin_headers,
  ui : plugin_ui,
  qt_resources : plugin_resources,
  include_directories : [global_inc],
  dependencies : [qt_dep, liteapp_lib],
)
