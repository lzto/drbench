#!/bin/bash

TEST_DIR=`pwd`

source ~/txgo/sourceme.sh

rm -rf ./nginx-1.9.1

tar xf nginx-1.9.1.tar.gz

prefix=`pwd`/clang

pushd nginx-1.9.1

CC=clang \
CXX=clang++ \
CFLAGS="-Ofast -g" \
./configure \
--prefix=$prefix \
--with-ld-opt="-Ofast -g" \
--with-cc-opt="-Ofast -g"

make -j10

make install

popd

:<<COMMENT

pushd $prefix/bin

cp ${TEST_DIR}/musthook.txt .

/home/lzto/txgo/whole-program-llvm/extract-bc nginx
/opt/spec/tools-root/bin/llvm-dis -o httpd.ll nginx.bc

../../txbin-prof.sh nginx.bc

../../txbin-pin.sh nginx

../../txbin-tx.sh nginx.bc

../../txbin-tsan.sh nginx.bc

popd
COMMENT

