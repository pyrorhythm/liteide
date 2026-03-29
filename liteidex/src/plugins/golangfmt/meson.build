# golangfmt - plugin

golangfmt_sources = [
  'golangfmtplugin.cpp',
  'golangfmt.cpp',
  'golangfmtoptionfactory.cpp',
  'golangfmtoption.cpp',
]

golangfmt_headers = [
  'golangfmtplugin.h',
  'golangfmt_global.h',
  'golangfmt.h',
  'golangfmtoptionfactory.h',
  'golangfmtoption.h',
]

golangfmt_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: golangfmt_headers,
  ui_files: 'golangfmtoption.ui',
  qresources: 'golangfmt.qrc',
)

shared_module('golangfmt',
  golangfmt_sources,
  golangfmt_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
