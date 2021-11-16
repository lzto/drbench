#!/bin/sh

## Replay system paths
UTIL=$HOME/spec-2.6/test
PREFIX=$HOME/dev-root

[ -f ~/.replay_build ] && source ~/.replay_build

CFLAGS="-I$UTIL -I$PREFIX/include -DSPEC_ENABLE"
LIBS="$UTIL/libutil.a"
LDFLAGS="-L$PREFIX/lib -Wl,-rpath,$PREFIX/lib -Wl,--dynamic-linker=$PREFIX/lib/ld-linux.so.2 -Wl,-z,now"

CONFIG=`dirname $0`/configure
echo "Running $CONFIG"

# For basic system - no bugs
$CONFIG --prefix=/tmp/ram/httpd-dynamic --with-mpm=worker --with-port=8080 \
    CFLAGS="$CFLAGS" LIBS="$LIBS" LDFLAGS="$LDFLAGS"

# For bug 1
#$CONFIG --prefix=/tmp/ram/httpd-dynamic --with-mpm=worker --with-port=8080 \
#    CPPFLAGS="$CPPFLAGS -DAPACHE_BUG_1" LIBS="$LIBS" LDFLAGS="$LDFLAGS"

# For bug 2
#$CONFIG --prefix=/tmp/ram/httpd-dynamic --with-mpm=worker --with-port=8080 --enable-cache --enable-mem-cache \
#    CPPFLAGS="$CPPFLAGS -DAPACHE_BUG_2" LIBS="$LIBS" LDFLAGS="$LDFLAGS"

# For bug 3
#$CONFIG --prefix=/tmp/ram/httpd-dynamic --with-mpm=worker --with-port=8080 \
#    CPPFLAGS="$CPPFLAGS -DAPACHE_BUG_3" LIBS="$LIBS" LDFLAGS="$LDFLAGS"

