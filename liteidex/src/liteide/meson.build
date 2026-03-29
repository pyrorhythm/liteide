# liteide - main executable

# Determine executable name based on platform
if host_machine.system() == 'windows'
  exe_name = 'liteide.exe'
elif host_machine.system() == 'darwin'
  exe_name = 'LiteIDE'
else
  exe_name = 'liteide'
endif

# Platform-specific link args
platform_link_args = []
if host_machine.system() == 'linux'
  platform_link_args += ['-Wl,-rpath,$ORIGIN', '-Wl,-rpath,$ORIGIN/../lib/liteide']
elif host_machine.system() == 'darwin'
  platform_link_args += ['-framework', 'Foundation']
endif

executable(exe_name,
  'main.cpp',
  include_directories : global_inc,
  dependencies : [qt_dep],
  link_with : [liteapp_lib, liteutils_lib, liteapi_lib, qtc_itemview_lib],
  link_args : platform_link_args,
  export_dynamic : true,
  install : true,
  install_dir : 'bin',
)
