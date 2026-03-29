# filebrowser - plugin

filebrowser_sources = [
  'filebrowserplugin.cpp',
  'filebrowser.cpp',
  'filebrowseroptionfactory.cpp',
  'filebrowseroption.cpp',
]

filebrowser_headers = [
  'filebrowserplugin.h',
  'filebrowser_global.h',
  'filebrowser.h',
  'filebrowseroptionfactory.h',
  'filebrowseroption.h',
]

filebrowser_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: filebrowser_headers,
  ui_files: 'filebrowseroption.ui',
  qresources: 'filebrowser.qrc',
)

shared_module('filebrowser',
  filebrowser_sources,
  filebrowser_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
