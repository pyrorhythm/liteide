project('liteide', 'cpp',
  version : '1.0',
  default_options : ['warning_level=2'])

# Qt dependency
qt_version = get_option('qt_version')
if qt_version == '6'
  qt_dep = dependency('qt6', modules: ['core', 'gui', 'widgets', 'xml', '5compat'], required: true)
else
  qt_dep = dependency('qt5', modules: ['core', 'gui', 'widgets', 'xml'], required: true)
endif

# Global include path for src/
global_inc = include_directories('src')

subdir('src')

# Deploy data
subdir('os_deploy')
