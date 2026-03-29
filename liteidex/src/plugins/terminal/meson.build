# terminal - plugin

terminal_sources = [
  'terminalplugin.cpp',
  'terminal.cpp',
  'terminaloption.cpp',
  'terminaloptionfactory.cpp',
]

terminal_headers = [
  'terminalplugin.h',
  'terminal_global.h',
  'terminal.h',
  'terminaloption.h',
  'terminaloptionfactory.h',
]

terminal_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: terminal_headers,
  ui_files: 'terminaloption.ui',
)

shared_module('terminal',
  terminal_sources,
  terminal_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
