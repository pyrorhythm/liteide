# Plugins - shared modules loaded by QPluginLoader at runtime

qt6_mod = import('qt6')

# On macOS, plugins resolve symbols from the host executable at load time
if host_machine.system() == 'darwin'
  plugin_link_args = ['-undefined', 'dynamic_lookup']
else
  plugin_link_args = []
endif

# Plugin install directory
if host_machine.system() == 'darwin'
  plugin_install_dir = 'PlugIns'
else
  plugin_install_dir = get_option('libdir') / 'liteide' / 'plugins'
endif

# Shared include directories for all plugins (needed for MOC to find headers)
plugin_inc = [global_inc]

plugin_subdirs = [
  'welcome',
  'liteenv',
  'litebuild',
  'liteeditor',
  'litefind',
  'litedebug',
  'litetty',
  'quickopen',
  'filebrowser',
  'golangast',
  'golangedit',
  'golangfmt',
  # 'golangcode',  # TEMPORARILY COMMENTED - needs gocode removal review
  'golangdoc',
  'golangplay',
  'golangpackage',
  'golangpresent',
  'markdown',
  'jsonedit',
  'rustedit',
  'dlvdebugger',
  'fakevimedit',
  'bookmarks',
  'imageeditor',
  'terminal',
]

foreach plugin : plugin_subdirs
  subdir(plugin)
endforeach
