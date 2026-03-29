# fakevimedit - plugin

fakevimedit_sources = [
  'fakevimeditplugin.cpp',
  'fakevimedit.cpp',
  'fakevimeditoption.cpp',
  'fakevimeditoptionfactory.cpp',
]

fakevimedit_headers = [
  'fakevimeditplugin.h',
  'fakevimedit_global.h',
  'fakevimedit.h',
  'fakevimeditoption.h',
  'fakevimeditoptionfactory.h',
]

fakevimedit_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: fakevimedit_headers,
  ui_files: 'fakevimeditoption.ui',
)

shared_module('fakevimedit',
  fakevimedit_sources,
  fakevimedit_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
