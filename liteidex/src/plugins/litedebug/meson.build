# litedebug - plugin

plugin_sources = [
  'litedebugplugin.cpp',
  'debugmanager.cpp',
  'debugwidget.cpp',
  'litedebug.cpp',
  'litedebugoptionfactory.cpp',
  'litedebugoption.cpp',
  'selectexternaldialog.cpp',
]

plugin_headers = [
  'litedebugplugin.h',
  'litedebug_global.h',
  'debugmanager.h',
  'debugwidget.h',
  'litedebug.h',
  'litedebugoptionfactory.h',
  'litedebugoption.h',
  'selectexternaldialog.h',
]

plugin_ui = [
  'litedebugoption.ui',
  'selectexternaldialog.ui',
]

plugin_resources = [
  'litedebug.qrc',
]

plugin_lib = static_library('litedebug',
  plugin_sources,
  plugin_headers,
  include_directories : [global_inc],
  dependencies : [qt_dep],
  link_with : [liteapp_lib],
)
