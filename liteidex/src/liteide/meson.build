# liteide - main executable

# Determine executable name based on platform
if host_machine.system() == 'windows'
  exe_name = 'liteide.exe'
elif host_machine.system() == 'darwin'
  exe_name = 'LiteIDE'
else
  exe_name = 'liteide'
endif

# RPATH for Linux
linux_rpath = []
if host_machine.system() == 'linux'
  linux_rpath = ['-Wl,-rpath,$ORIGIN', '-Wl,-rpath,$ORIGIN/../lib/liteide']
endif

executable(exe_name,
  'main.cpp',
  include_directories : global_inc,
  dependencies : [qt_dep, liteapp_lib],
  link_args : linux_rpath,
  install : true,
  install_dir : 'bin',
)
