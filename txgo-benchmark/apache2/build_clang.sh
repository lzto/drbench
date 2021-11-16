#!/bin/bash

VERSION="2.4.12"

rm -rf ./httpd-${VERSION}

tar xf httpd-${VERSION}.tar.bz2

prefix=`pwd`/clang

pushd httpd-${VERSION}

CC=clang \
CXX=clang++ \
CFLAGS="-Ofast -g" \
CXXFLAGS="-Ofast -g" \
LDFLAGS="-Ofast -g" \
./configure \
--prefix=$prefix \
--with-mpm=worker \
--enable-module=static

make -j10

make install

popd


