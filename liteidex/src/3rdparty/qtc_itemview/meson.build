# qtc_itemview - Qt Creator item view components

qtc_itemview_sources = [
  'opendocumentstreeview.cpp',
  'itemviews.cpp',
  'proxymodel.cpp',
]

qtc_itemview_headers = [
  'opendocumentstreeview.h',
  'itemviews.h',
  'proxymodel.h',
]

qt6_mod = import('qt6')
qtc_itemview_generated = qt6_mod.preprocess(
  moc_headers: qtc_itemview_headers,
  qresources: 'qtc_itemview.qrc',
)

qtc_itemview_lib = static_library('qtc_itemview',
  qtc_itemview_sources,
  qtc_itemview_headers,
  qtc_itemview_generated,
  include_directories : global_inc,
  dependencies : [qt_dep],
)
