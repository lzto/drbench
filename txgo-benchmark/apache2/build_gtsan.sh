#!/bin/bash

VERSION="2.4.12"


rm -rf ./httpd-${VERSION}

tar xf httpd-${VERSION}.tar.bz2

prefix=`pwd`/gtsan

pushd httpd-${VERSION}

CC=/home/lzto/txgoto/llvm/build/bin/clang \
CXX=/home/lzto/txgoto/llvm/build/clang++ \
CFLAGS="-fsanitize=thread -Ofast -g" \
LDFLAGS="-fsanitize=thread -Ofast -g" \
CXXFLAGS="-fsanitize=thread -Ofast -g" \
./configure \
--prefix=$prefix \
--with-mpm=worker

make -j10

make install

popd


