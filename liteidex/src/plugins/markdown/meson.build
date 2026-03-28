# markdown - plugin

plugin_sources = [
  'markdownplugin.cpp',
  'htmlpreview.cpp',
  'markdownedit.cpp',
  'markdownbatchbrowser.cpp',
]

plugin_headers = [
  'markdownplugin.h',
  'markdown_global.h',
  'htmlpreview.h',
  'markdownedit.h',
  'markdownbatchbrowser.h',
]

plugin_ui = [
  'markdownbatchwidget.ui',
]

plugin_resources = [
  'markdown.qrc',
]

plugin_lib = static_library('markdown',
  plugin_sources,
  plugin_headers,
  ui : plugin_ui,
  qt_resources : plugin_resources,
  include_directories : [global_inc],
  dependencies : [qt_dep, liteapp_lib],
)
