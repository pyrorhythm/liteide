# litefind - plugin

litefind_sources = [
  'litefindplugin.cpp',
  'filesearch.cpp',
  'findeditor.cpp',
  'filesearchmanager.cpp',
  'replacedocument.cpp',
]

litefind_headers = [
  'litefindplugin.h',
  'litefind_global.h',
  'filesearch.h',
  'findeditor.h',
  'filesearchmanager.h',
  'replacedocument.h',
]

litefind_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: litefind_headers,
)

shared_module('litefind',
  litefind_sources,
  litefind_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
