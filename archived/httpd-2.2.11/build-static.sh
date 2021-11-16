#!/bin/sh

## Replay system paths
UTIL=$HOME/spec2.6/test
PREFIX=$HOME/glibc-2.5.1/prefix

[ -f ~/.replay_build ] && source ~/.replay_build

CPPFLAGS="-I$UTIL -I$PREFIX/include -DSPEC_ENABLE"
CFLAGS="-static"
LIBS="$UTIL/libutil.a"
LDFLAGS="-static -L$PREFIX/lib"

CONFIG=`dirname $0`/configure
echo "Running $CONFIG"
$CONFIG --prefix=/tmp/ram/httpd-static --with-mpm=worker --with-port=8080 \
    CFLAGS="$CFLAGS" CPPFLAGS="$CPPFLAGS" LIBS="$LIBS" LDFLAGS="$LDFLAGS"
