# imageeditor - plugin

imageeditor_sources = [
  'imageeditor.cpp',
  'imageeditorfactory.cpp',
  'imageeditorfile.cpp',
  'imageeditorplugin.cpp',
  'imageeditorwidget.cpp',
]

imageeditor_headers = [
  'imageeditor.h',
  'imageeditor_global.h',
  'imageeditorfactory.h',
  'imageeditorfile.h',
  'imageeditorplugin.h',
  'imageeditorwidget.h',
]

imageeditor_gen = qt6_mod.preprocess(
  include_directories: plugin_inc,
  moc_headers: imageeditor_headers,
  qresources: 'imageeditor.qrc',
)

shared_module('imageeditor',
  imageeditor_sources,
  imageeditor_gen,
  name_prefix: '',
  include_directories: [global_inc],
  dependencies: [qt_dep],
  link_args: plugin_link_args,
  install: true,
  install_dir: plugin_install_dir,
)
