# liteapp - main application library

liteapp_sources = [
  'main.cpp',
  'mainwindow.cpp',
  'liteapp.cpp',
  'filemanager.cpp',
  'editormanager.cpp',
  'projectmanager.cpp',
  'pluginmanager.cpp',
  'actionmanager.cpp',
  'aboutdialog.cpp',
  'pluginsdialog.cpp',
  'mimetypemanager.cpp',
  'optionmanager.cpp',
  'newfiledialog.cpp',
  'optionsbrowser.cpp',
  'liteappoption.cpp',
  'liteappoptionfactory.cpp',
  'toolmainwindow.cpp',
  'tooldockwidget.cpp',
  'rotationtoolbutton.cpp',
  'toolwindowmanager.cpp',
  'folderproject.cpp',
  'folderprojectfactory.cpp',
  'goproxy.cpp',
  'htmlwidgetmanager.cpp',
  'textbrowserhtmlwidget.cpp',
  'splitwindowstyle.cpp',
  'sidewindowstyle.cpp',
  'outputoption.cpp',
  'openeditorswidget.cpp',
  'idletimer.cpp',
  'recentmanager.cpp',
  'multifolderwindow.cpp',
  'splitfolderwindow.cpp',
]

liteapp_headers = [
  'mainwindow.h',
  'liteapp.h',
  'liteapp_global.h',
  'filemanager.h',
  'editormanager.h',
  'projectmanager.h',
  'pluginmanager.h',
  'actionmanager.h',
  'aboutdialog.h',
  'pluginsdialog.h',
  'mimetypemanager.h',
  'optionmanager.h',
  'newfiledialog.h',
  'optionsbrowser.h',
  'liteappoption.h',
  'liteappoptionfactory.h',
  'toolmainwindow.h',
  'tooldockwidget.h',
  'rotationtoolbutton.h',
  'toolwindowmanager.h',
  'folderproject.h',
  'folderprojectfactory.h',
  'goproxy.h',
  'cdrv.h',
  'htmlwidgetmanager.h',
  'textbrowserhtmlwidget.h',
  'windowstyle.h',
  'splitwindowstyle.h',
  'sidewindowstyle.h',
  'outputoption.h',
  'openeditorswidget.h',
  'idletimer.h',
  'recentmanager.h',
  'multifolderwindow.h',
  'splitfolderwindow.h',
]

liteapp_ui = [
  'aboutdialog.ui',
  'pluginsdialog.ui',
  'newfiledialog.ui',
  'optionswidget.ui',
  'liteappoption.ui',
  'outputoption.ui',
]

# Generate UI headers using Qt6 uic and MOC for Q_OBJECT classes
qt6_dep = dependency('qt6', modules: ['Core', 'Gui', 'Widgets'], required: false)
if qt6_dep.found()
  qt6_mod = import('qt6')
  # Generate both UI headers and MOC files for Q_OBJECT
  moc_gen = qt6_mod.preprocess(
    ui_files: liteapp_ui,
    moc_headers: liteapp_headers
  )
  # Add generated sources to compilation
  liteapp_generated = [moc_gen]
endif

# Conditionally add mac support
if host_machine.system() == 'darwin'
  liteapp_sources += 'macsupport.mm'
  liteapp_headers += 'macsupport.h'
endif

liteapp_lib = static_library('liteapp',
  liteapp_sources,
  liteapp_headers,
  liteapp_generated,
  include_directories : global_inc,
  dependencies : [qt_dep],
  cpp_args : ['-DLITEAPP_LIBRARY'],
)
