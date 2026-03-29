# liteenv - plugin

liteenv_sources = [
  'liteenvplugin.cpp',
  'envmanager.cpp',
  'liteenvoptionfactory.cpp',
  'liteenvoption.cpp',
  'goenvmanager.cpp',
]

liteenv_headers = [
  'liteenvplugin.h',
  'liteenv_global.h',
  'envmanager.h',
  'liteenvoptionfactory.h',
  'liteenvoption.h',
  'goenvmanager.h',
]

liteenv_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: liteenv_headers,
  ui_files: 'liteenvoption.ui',
  qresources: 'liteenv.qrc',
)

shared_module('liteenv',
  liteenv_sources,
  liteenv_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
