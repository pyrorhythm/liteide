# golangpresent - plugin

golangpresent_sources = [
  'golangpresentedit.cpp',
  'golangpresentplugin.cpp',
  'exportdialog.cpp',
]

golangpresent_headers = [
  'golangpresent_global.h',
  'golangpresentedit.h',
  'golangpresentplugin.h',
  'exportdialog.h',
]

golangpresent_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: golangpresent_headers,
  ui_files: 'exportdialog.ui',
  qresources: 'golangpresent.qrc',
)

shared_module('golangpresent',
  golangpresent_sources,
  golangpresent_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
