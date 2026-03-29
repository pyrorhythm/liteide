# quickopen - plugin

quickopen_sources = [
  'quickopenplugin.cpp',
  'quickopenwidget.cpp',
  'quickopenmanager.cpp',
  'quickopenfiles.cpp',
  'quickopenlines.cpp',
  'quickopenhelp.cpp',
  'quickopeneditor.cpp',
  'quickopenmimetype.cpp',
  'quickopenoption.cpp',
  'quickopenoptionfactory.cpp',
  'quickopenaction.cpp',
  'quickopenfolder.cpp',
  'quickopenfilesystem.cpp',
]

quickopen_headers = [
  'quickopenplugin.h',
  'quickopen_global.h',
  'quickopenwidget.h',
  'quickopenmanager.h',
  'quickopenfiles.h',
  'quickopenlines.h',
  'quickopenhelp.h',
  'quickopeneditor.h',
  'quickopenmimetype.h',
  'quickopenoption.h',
  'quickopenoptionfactory.h',
  'quickopenaction.h',
  'quickopenfolder.h',
  'quickopenfilesystem.h',
]

quickopen_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: quickopen_headers,
  ui_files: 'quickopenoption.ui',
)

shared_module('quickopen',
  quickopen_sources,
  quickopen_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
