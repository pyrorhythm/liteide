project('liteide', 'cpp',
  version : '1.0',
  default_options : ['warning_level=2'])

# Qt dependency
qt_version = get_option('qt_version')
qt_dep = qt_dep = dependency('qt6', modules: ['core', 'gui', 'widgets', 'xml', '5compat'],
             required: qt_version == '6')
if not qt_dep.found()
  qt_dep = dependency('qt5', modules: ['core', 'gui', 'widgets', 'xml'],
             required: qt_version == '5')
endif

# Global include path for src/
global_inc = include_directories('src')

subdir('src')

# Deploy data
subdir('os_deploy')
