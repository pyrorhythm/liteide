# litetty - plugin

litetty_sources = [
  'litettyplugin.cpp',
  'litetty.cpp',
  'sockettty.cpp',
]

litetty_headers = [
  'litettyplugin.h',
  'litetty_global.h',
  'litetty.h',
  'sockettty.h',
]

# Platform-specific sources
if host_machine.system() != 'windows'
  litetty_sources += 'fifotty.cpp'
  litetty_headers += 'fifotty.h'
endif

litetty_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: litetty_headers,
)

shared_module('litetty',
  litetty_sources,
  litetty_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
