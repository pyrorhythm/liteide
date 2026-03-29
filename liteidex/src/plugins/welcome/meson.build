# welcome - plugin

welcome_sources = [
  'welcomeplugin.cpp',
  'welcomebrowser.cpp',
  'litedoc.cpp',
]

welcome_headers = [
  'welcomeplugin.h',
  'welcome_global.h',
  'welcomebrowser.h',
  'litedoc.h',
]

welcome_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: welcome_headers,
  qresources: 'welcome.qrc',
)

shared_module('welcome',
  welcome_sources,
  welcome_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
