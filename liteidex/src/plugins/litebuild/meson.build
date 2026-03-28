# litebuild - plugin

plugin_sources = [
  'litebuildplugin.cpp',
  'litebuild.cpp',
  'build.cpp',
  'buildmanager.cpp',
  'litebuildoptionfactory.cpp',
  'litebuildoption.cpp',
  'buildconfigdialog.cpp',
]

plugin_headers = [
  'litebuildplugin.h',
  'litebuild_global.h',
  'litebuild.h',
  'build.h',
  'buildmanager.h',
  'litebuildoptionfactory.h',
  'litebuildoption.h',
  'buildconfigdialog.h',
]

plugin_ui = [
  'litebuildoption.ui',
  'buildconfigdialog.ui',
]

plugin_resources = [
  'litebuild.qrc',
]

plugin_lib = static_library('litebuild',
  plugin_sources,
  plugin_headers,
  ui : plugin_ui,
  qt_resources : plugin_resources,
  include_directories : [global_inc],
  dependencies : [qt_dep, liteapp_lib],
)
