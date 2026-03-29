# markdown - plugin

markdown_sources = [
  'markdownplugin.cpp',
  'htmlpreview.cpp',
  'markdownedit.cpp',
  'markdownbatchbrowser.cpp',
]

markdown_headers = [
  'markdownplugin.h',
  'markdown_global.h',
  'htmlpreview.h',
  'markdownedit.h',
  'markdownbatchbrowser.h',
]

markdown_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: markdown_headers,
  ui_files: 'markdownbatchwidget.ui',
  qresources: 'markdown.qrc',
)

shared_module('markdown',
  markdown_sources,
  markdown_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
