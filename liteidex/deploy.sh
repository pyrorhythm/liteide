#!/bin/bash
set -e

BUILD_ROOT=${PWD}
PREFIX=${PREFIX:-/usr/local}

echo "Deploying LiteIDE to ${PREFIX}"

# Create directories
install -d ${PREFIX}/bin
install -d ${PREFIX}/lib/liteide
install -d ${PREFIX}/lib/liteide/plugins
install -d ${PREFIX}/share/liteide

# Copy executable
if [ -f liteide/bin/liteide ]; then
  install -m 755 liteide/bin/liteide ${PREFIX}/bin/
elif [ -f LiteIDE.app/Contents/MacOS/LiteIDE ]; then
  install -m 755 LiteIDE.app/Contents/MacOS/LiteIDE ${PREFIX}/bin/
fi

# Copy libraries
if [ -d liteide/lib/liteide ]; then
  install -m 755 liteide/lib/liteide/*.so ${PREFIX}/lib/liteide/ 2>/dev/null || true
fi

# Copy plugins
if [ -d liteide/lib/liteide/plugins ]; then
  install -m 755 liteide/lib/liteide/plugins/*.so ${PREFIX}/lib/liteide/plugins/
fi

# Copy data
if [ -d liteide/share/liteide ]; then
  cp -r liteide/share/liteide/* ${PREFIX}/share/liteide/
elif [ -d LiteIDE.app/Contents/Resources ]; then
  cp -r LiteIDE.app/Contents/Resources/* ${PREFIX}/share/liteide/
fi

echo "Deploy complete"
