# litebuild - plugin

litebuild_sources = [
  'litebuildplugin.cpp',
  'litebuild.cpp',
  'build.cpp',
  'buildmanager.cpp',
  'litebuildoptionfactory.cpp',
  'litebuildoption.cpp',
  'buildconfigdialog.cpp',
]

litebuild_headers = [
  'litebuildplugin.h',
  'litebuild_global.h',
  'litebuild.h',
  'build.h',
  'buildmanager.h',
  'litebuildoptionfactory.h',
  'litebuildoption.h',
  'buildconfigdialog.h',
]

litebuild_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: litebuild_headers,
  ui_files: ['litebuildoption.ui', 'buildconfigdialog.ui'],
  qresources: 'litebuild.qrc',
)

shared_module('litebuild',
  litebuild_sources,
  litebuild_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
