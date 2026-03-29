# rustedit - plugin

rustedit_sources = [
  'rusteditplugin.cpp',
  'rustedit.cpp',
]

rustedit_headers = [
  'rusteditplugin.h',
  'rustedit_global.h',
  'rustedit.h',
]

rustedit_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: rustedit_headers,
)

shared_module('rustedit',
  rustedit_sources,
  rustedit_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
