project('cmark', 'c')

cmark_sources = [
  'libcmark.cpp',
  'src/blocks.c',
  'src/buffer.c',
  'src/cmark.c',
  'src/cmark_ctype.c',
  'src/commonmark.c',
  'src/houdini_href_e.c',
  'src/houdini_html_e.c',
  'src/houdini_html_u.c',
  'src/html.c',
  'src/inlines.c',
  'src/iterator.c',
  'src/latex.c',
  'src/man.c',
  'src/node.c',
  'src/references.c',
  'src/render.c',
  'src/scanners.c',
  'src/utf8.c',
  'src/xml.c',
]

cmark_lib = static_library('cmark', cmark_sources)
