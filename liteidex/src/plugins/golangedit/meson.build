# golangedit - plugin

golangedit_sources = [
  'golangeditplugin.cpp',
  'golangedit.cpp',
  'golangfilesearch.cpp',
  'golanghighlighter.cpp',
  'golanghighlighterfactory.cpp',
  'golangtextlexer.cpp',
  'golangeditoption.cpp',
  'golangeditoptionfactory.cpp',
  'goaddtagsdialog.cpp',
  'goplsfilesearch.cpp',
  'goremovetagsdialog.cpp',
]

golangedit_headers = [
  'golangeditplugin.h',
  'golangedit_global.h',
  'golangedit.h',
  'golangfilesearch.h',
  'golanghighlighter.h',
  'golanghighlighterfactory.h',
  'golangtextlexer.h',
  'golangeditoption.h',
  'golangeditoptionfactory.h',
  'goaddtagsdialog.h',
  'goplsfilesearch.h',
  'goremovetagsdialog.h',
]

golangedit_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: golangedit_headers,
  ui_files: ['golangeditoption.ui', 'goaddtagsdialog.ui', 'goremovetagsdialog.ui'],
)

shared_module('golangedit',
  golangedit_sources,
  golangedit_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
