# dlvdebugger - plugin

plugin_sources = [
  'dlvdebuggerplugin.cpp',
  'dlvdebugger.cpp',
  'dlvdebuggeroptionfactory.cpp',
  'dlvdebuggeroption.cpp',
]

plugin_headers = [
  'dlvdebuggerplugin.h',
  'dlvdebugger_global.h',
  'dlvdebugger.h',
  'dlvdebuggeroptionfactory.h',
  'dlvdebuggeroption.h',
]

plugin_ui = [
  'dlvdebuggeroption.ui',
]

# Conditional: dlvrpcdebugger is only built when liteide_use_dlvclient is set
# For now, we comment it out as it requires dlvclient which needs meson conversion
# plugin_sources += 'dlvrpcdebugger.cpp'
# plugin_headers += 'dlvrpcdebugger.h'

plugin_lib = static_library('dlvdebugger',
  plugin_sources,
  plugin_headers,
  include_directories : [global_inc],
  dependencies : [qt_dep],
  link_with : [liteapp_lib],
)
