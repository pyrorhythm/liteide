# litetty - plugin

plugin_sources = [
  'litettyplugin.cpp',
  'litetty.cpp',
  'sockettty.cpp',
]

plugin_headers = [
  'litettyplugin.h',
  'litetty_global.h',
  'litetty.h',
  'sockettty.h',
]

# Platform-specific sources
if host_machine.system() != 'windows'
  plugin_sources += 'fifotty.cpp'
  plugin_headers += 'fifotty.h'
endif

plugin_lib = static_library('litetty',
  plugin_sources,
  plugin_headers,
  include_directories : [global_inc],
  dependencies : [qt_dep, liteapp_lib],
)
