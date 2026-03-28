# acp plugin - ACP (Agent Client Protocol) integration

acp_sources = [
  'acpplugin.cpp',
  'acpclient.cpp',
  'acpoption.cpp',
]

acp_headers = [
  'acpplugin.h',
  'acpclient.h',
  'acpoption.h',
]

acp_lib = static_library('acp',
  acp_sources,
  acp_headers,
  include_directories : [global_inc],
  dependencies : [qt_dep],
)
