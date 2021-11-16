#!/bin/bash

TEST_DIR=`pwd`

source ~/txgo/sourceme.sh

rm -rf ./nginx-1.9.1

tar xf nginx-1.9.1.tar.gz

prefix=`pwd`/gtsan

pushd nginx-1.9.1

CC=/home/lzto/txgoto/llvm/build/bin/clang \
CXX=/home/lzto/txgoto/llvm/build/clang++ \
CFLAGS="-fsanitize=thread -fPIE -Ofast -g" \
./configure \
--prefix=$prefix \
--with-ld-opt="-fsanitize=thread -pie -Ofast -g" \
--with-cc-opt="-fsanitize=thread -fPIE -Ofast -g"


make -j10

make install

popd


