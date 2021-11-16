#!/bin/bash
#STATIC binary w/ SPEC_ENABLE: for DoublePlay numbers

DEV_ROOT=$HOME/dev-root/
UTIL=$HOME/spec-2.6/test/

export CFLAGS="-I$DEV_ROOT/include -I$UTIL -DSPEC_ENABLE -DMYSQL_BUG_1"
export CXXFLAGS="$CFLAGS"
export LDFLAGS="-L$DEV_ROOT/lib" 
export LIBS="$UTIL/libutil.a" 
./configure \
	--prefix=/tmp/ram/mysql \
	--with-client-ldflags=-all-static \
	--with-mysqld-ldflags=-all-static


# This is the vanilla compile line
#./configure --prefix=/tmp/ram/mysql --with-client-ldflags=-all-static --with-mysqld-ldflags=-all-static

