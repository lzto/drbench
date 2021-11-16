#!/bin/bash

export PATH=/home/lzto/txgoto/llvm/build/bin/:$PATH

prefix=`pwd`/gtsan

pushd mysql-5.6.24

#rm -rf ./build-gtsan

mkdir -p build-gtsan

pushd build-gtsan

CC=/home/lzto/txgoto/llvm/build/bin/clang \
CXX=/home/lzto/txgoto/llvm/build/bin/clang++ \
CFLAGS="-fsanitize=thread" \
CXXFLAGS="-fsanitize=thread" \
LDFLAGS="-fsanitize=thread" \
cmake .. \
-DCMAKE_INSTALL_PREFIX=$prefix \
-DDISABLE_SHARED=1

make 

make install

#build-clang
popd


#mysql-5.6.24
popd



