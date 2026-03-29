# bookmarks - plugin

bookmarks_sources = [
  'bookmarksplugin.cpp',
  'bookmarkmanager.cpp',
  'bookmarkmodel.cpp',
]

bookmarks_headers = [
  'bookmarksplugin.h',
  'bookmarks_global.h',
  'bookmarkmanager.h',
  'bookmarkmodel.h',
]

bookmarks_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: bookmarks_headers,
  qresources: 'bookmarks.qrc',
)

shared_module('bookmarks',
  bookmarks_sources,
  bookmarks_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
