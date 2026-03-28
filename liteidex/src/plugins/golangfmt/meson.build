# golangfmt - plugin

plugin_sources = [
  'golangfmtplugin.cpp',
  'golangfmt.cpp',
  'golangfmtoptionfactory.cpp',
  'golangfmtoption.cpp',
]

plugin_headers = [
  'golangfmtplugin.h',
  'golangfmt_global.h',
  'golangfmt.h',
  'golangfmtoptionfactory.h',
  'golangfmtoption.h',
]

plugin_ui = [
  'golangfmtoption.ui',
]

plugin_resources = [
  'golangfmt.qrc',
]

plugin_lib = static_library('golangfmt',
  plugin_sources,
  plugin_headers,
  ui : plugin_ui,
  qt_resources : plugin_resources,
  include_directories : [global_inc],
  dependencies : [qt_dep, liteapp_lib],
)
