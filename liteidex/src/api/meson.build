# API modules - header-only interfaces that need MOC for Q_OBJECT classes
# These headers define abstract interfaces with signals/slots, so MOC must
# generate the meta-object implementations (staticMetaObject, qt_metacall, etc.)

liteapi_moc_headers = [
  'liteapi/liteapi.h',
  'liteapi/litehtml.h',
  'liteenvapi/liteenvapi.h',
  'litefindapi/litefindapi.h',
  'litebuildapi/litebuildapi.h',
  'liteeditorapi/liteeditorapi.h',
  'litedebugapi/litedebugapi.h',
  'litettyapi/litettyapi.h',
  'docbrowserapi/docbrowserapi.h',
  'golangdocapi/golangdocapi.h',
  'golangastapi/golangastapi.h',
  'quickopenapi/quickopenapi.h',
  'terminalapi/terminalapi.h',
  'acpapi/acpapi.h',
]

qt6_mod = import('qt6')
liteapi_generated = qt6_mod.preprocess(
  moc_headers: liteapi_moc_headers,
)

liteapi_lib = static_library('liteapi',
  liteapi_generated,
  include_directories : global_inc,
  dependencies : [qt_dep],
)
