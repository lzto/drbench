#!/bin/bash
#STATIC binary w/ SPEC_ENABLE: for DoublePlay numbers
#FIXME: how to trigger bug of this version?
DEV_ROOT=$HOME/dev-root/
UTIL=$HOME/spec-2.6/test/

export CFLAGS="-I$DEV_ROOT/include -I$UTIL -DSPEC_ENABLE -DMYSQL_BUG_3596"
export CXXFLAGS="$CFLAGS"
export LDFLAGS="-L$DEV_ROOT/lib" 
export LIBS="$UTIL/libutil.a" 
./configure \
	--prefix=/tmp/ram/mysql \
	--with-client-ldflags=-all-static \
	--with-mysqld-ldflags=-all-static

