# golangplay - plugin

golangplay_sources = [
  'golangplayplugin.cpp',
  'GoPlayBrowser.cpp',
]

golangplay_headers = [
  'golangplayplugin.h',
  'golangplay_global.h',
  'GoPlayBrowser.h',
]

golangplay_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: golangplay_headers,
)

shared_module('golangplay',
  golangplay_sources,
  golangplay_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
