# golangast - plugin

golangast_sources = [
  'golangastplugin.cpp',
  'golangast.cpp',
  'golangasticon.cpp',
  'astwidget.cpp',
  'golangsymbol.cpp',
  'golangastoption.cpp',
  'golangastoptionfactory.cpp',
]

golangast_headers = [
  'golangastplugin.h',
  'golangast_global.h',
  'golangast.h',
  'golangasticon.h',
  'astwidget.h',
  'golangastitem.h',
  'golangsymbol.h',
  'golangastoption.h',
  'golangastoptionfactory.h',
]

golangast_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: golangast_headers,
  ui_files: 'golangastoption.ui',
  qresources: 'golangast.qrc',
)

shared_module('golangast',
  golangast_sources,
  golangast_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
