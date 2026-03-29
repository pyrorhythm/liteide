# golangdoc - plugin

golangdoc_sources = [
  'golangdocplugin.cpp',
  'golangdoc.cpp',
  'golangdocoptionfactory.cpp',
  'golangdocoption.cpp',
  'finddocwidget.cpp',
  'findapiwidget.cpp',
]

golangdoc_headers = [
  'golangdocplugin.h',
  'golangdoc_global.h',
  'golangdoc.h',
  'golangdocoptionfactory.h',
  'golangdocoption.h',
  'finddocwidget.h',
  'findapiwidget.h',
]

golangdoc_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: golangdoc_headers,
  ui_files: 'golangdocoption.ui',
)

shared_module('golangdoc',
  golangdoc_sources,
  golangdoc_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
