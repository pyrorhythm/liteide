# litedebug - plugin

litedebug_sources = [
  'litedebugplugin.cpp',
  'debugmanager.cpp',
  'debugwidget.cpp',
  'litedebug.cpp',
  'litedebugoptionfactory.cpp',
  'litedebugoption.cpp',
  'selectexternaldialog.cpp',
]

litedebug_headers = [
  'litedebugplugin.h',
  'litedebug_global.h',
  'debugmanager.h',
  'debugwidget.h',
  'litedebug.h',
  'litedebugoptionfactory.h',
  'litedebugoption.h',
  'selectexternaldialog.h',
]

litedebug_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: litedebug_headers,
  ui_files: ['litedebugoption.ui', 'selectexternaldialog.ui'],
  qresources: 'litedebug.qrc',
)

shared_module('litedebug',
  litedebug_sources,
  litedebug_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
