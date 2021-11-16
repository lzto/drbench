#!/bin/bash

source ~/txgo/sourceme.sh

prefix=`pwd`/clang

pushd mysql-5.6.24

rm -rf ./build-clang

mkdir -p build-clang

pushd build-clang

CC=clang \
CXX=clang++ \
cmake .. \
-DCMAKE_INSTALL_PREFIX=$prefix

make -j10

make install

#build-clang
popd


#mysql-5.6.24
popd



