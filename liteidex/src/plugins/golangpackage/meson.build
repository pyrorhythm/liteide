# golangpackage - plugin

plugin_sources = [
  'golangpackageplugin.cpp',
  'filepathmodel.cpp',
  'golangpackageoption.cpp',
  'golangpackageoptionfactory.cpp',
  'packagebrowser.cpp',
  'gotool.cpp',
  'packageproject.cpp',
  'packagetree.cpp',
  'packageprojectfactory.cpp',
]

plugin_headers = [
  'golangpackageplugin.h',
  'golangpackage_global.h',
  'filepathmodel.h',
  'golangpackageoption.h',
  'golangpackageoptionfactory.h',
  'packagebrowser.h',
  'gotool.h',
  'packageproject.h',
  'packagetree.h',
  'packageprojectfactory.h',
]

plugin_ui = [
  'golangpackageoption.ui',
]

plugin_lib = static_library('golangpackage',
  plugin_sources,
  plugin_headers,
  ui : plugin_ui,
  include_directories : [global_inc],
  dependencies : [qt_dep, liteapp_lib],
)
