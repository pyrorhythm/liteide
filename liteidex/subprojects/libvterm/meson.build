project('libvterm', 'c')

libvterm_sources = [
  'src/encoding.c',
  'src/keyboard.c',
  'src/mouse.c',
  'src/parser.c',
  'src/pen.c',
  'src/screen.c',
  'src/state.c',
  'src/unicode.c',
  'src/vterm.c',
]

libvterm_inc = include_directories('include')

libvterm_lib = static_library('libvterm', libvterm_sources,
  include_directories : libvterm_inc,
)
