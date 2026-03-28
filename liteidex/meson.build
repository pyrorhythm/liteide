project('liteide', ['cpp', 'objcpp'],
  version : '1.0',
  default_options : ['warning_level=1', 'cpp_std=c++17'],
  meson_version : '>=0.57')

# Fix Qt6 __yield issue on ARM macOS - don't treat implicit function decl as error
add_project_arguments(['-Wno-error=implicit-function-declaration'], language: 'c')
add_project_arguments(['-Wno-error=implicit-function-declaration'], language: 'cpp')

# Qt dependency - use individual modules since qt6 meta-package doesn't exist on macOS Homebrew
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
  # Qt tools path for macOS Homebrew
  qt_tools_path = '/opt/homebrew/share/qt/libexec'
else
  qt_deps = [
    dependency('qt5', modules: ['core', 'gui', 'widgets', 'xml', 'network', 'printsupport'], required: true),
  ]
  qt_tools_path = ''
endif
# Combined dependency for backward compatibility
qt_dep = declare_dependency(dependencies: qt_deps)

# Global include paths - src/, src/api, src/utils, src/3rdparty and generated UI
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
