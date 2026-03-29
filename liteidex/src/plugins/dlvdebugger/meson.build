# dlvdebugger - plugin

dlvdebugger_sources = [
  'dlvdebuggerplugin.cpp',
  'dlvdebugger.cpp',
  'dlvdebuggeroptionfactory.cpp',
  'dlvdebuggeroption.cpp',
]

dlvdebugger_headers = [
  'dlvdebuggerplugin.h',
  'dlvdebugger_global.h',
  'dlvdebugger.h',
  'dlvdebuggeroptionfactory.h',
  'dlvdebuggeroption.h',
]

dlvdebugger_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: dlvdebugger_headers,
  ui_files: 'dlvdebuggeroption.ui',
)

shared_module('dlvdebugger',
  dlvdebugger_sources,
  dlvdebugger_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
