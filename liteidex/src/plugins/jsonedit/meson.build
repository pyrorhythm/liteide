# jsonedit - plugin

jsonedit_sources = [
  'jsoneditplugin.cpp',
  'jsonedit.cpp',
]

jsonedit_headers = [
  'jsoneditplugin.h',
  'jsonedit_global.h',
  'jsonedit.h',
]

jsonedit_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: jsonedit_headers,
)

shared_module('jsonedit',
  jsonedit_sources,
  jsonedit_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
