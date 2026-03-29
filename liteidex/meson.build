project('liteide', ['cpp', 'objcpp'],
  version : '1.0',
  default_options : ['warning_level=1', 'cpp_std=c++17'],
  meson_version : '>=0.57')

add_project_arguments(['-Wno-error=implicit-function-declaration'], language: 'c')
add_project_arguments(['-Wno-error=implicit-function-declaration'], language: 'cpp')

qt_version = get_option('qt_version')
if qt_version == '6'
  qt_deps = [
    dependency('Qt6Core', required: true),
    dependency('Qt6Gui', required: true),
    dependency('Qt6Widgets', required: true),
    dependency('Qt6Xml', required: true),
    dependency('Qt6Network', required: true),
    dependency('Qt6PrintSupport', required: true),
    dependency('Qt6Core5Compat', required: true),
  ]
  qt_tools_path = '/opt/homebrew/share/qt/libexec'
else
  qt_deps = [
    dependency('qt5', modules: ['core', 'gui', 'widgets', 'xml', 'network', 'printsupport'], required: true),
  ]
  qt_tools_path = ''
endif
qt_dep = declare_dependency(dependencies: qt_deps)

global_inc = include_directories(
  'src',
  'src/api',
  'src/utils',
  'src/3rdparty',
  'ui_gen'
)

subdir('src')

# Deploy data - temporarily disabled until os_deploy meson.build is created
# subdir('os_deploy')
