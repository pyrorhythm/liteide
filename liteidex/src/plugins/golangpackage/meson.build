# golangpackage - plugin

golangpackage_sources = [
  'golangpackageplugin.cpp',
  'filepathmodel.cpp',
  'golangpackageoption.cpp',
  'golangpackageoptionfactory.cpp',
  'packagebrowser.cpp',
  'gotool.cpp',
  'packageproject.cpp',
  'packagetree.cpp',
  'packageprojectfactory.cpp',
]

golangpackage_headers = [
  'golangpackageplugin.h',
  'golangpackage_global.h',
  'filepathmodel.h',
  'golangpackageoption.h',
  'golangpackageoptionfactory.h',
  'packagebrowser.h',
  'gotool.h',
  'packageproject.h',
  'packagetree.h',
  'packageprojectfactory.h',
]

golangpackage_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: golangpackage_headers,
  ui_files: 'golangpackageoption.ui',
)

shared_module('golangpackage',
  golangpackage_sources,
  golangpackage_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
