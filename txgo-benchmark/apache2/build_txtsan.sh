#!/bin/bash

VERSION="2.4.12"

TEST_DIR=`pwd`

source ~/txgo/sourceme.sh

rm -rf ./httpd-${VERSION}

tar xf httpd-${VERSION}.tar.bz2

prefix=`pwd`/txtsan

pushd httpd-${VERSION}

CC=wllvm \
CXX=wllvm++ \
CFLAGS="-Ofast" \
CXXFLAGS="-Ofast" \
LDFLAGS="-Ofast" \
./configure \
--prefix=$prefix \
--with-mpm=worker

#--enable-mods-static=most

make -j10

make install

popd

#:<<COMMENT

pushd $prefix/bin

cp ${TEST_DIR}/musthook.txt .

/home/lzto/txgo/whole-program-llvm/extract-bc httpd
/opt/spec/tools-root/bin/llvm-dis -o httpd.ll httpd.bc


../../txbin-prof.sh httpd.bc

../../txbin-pin.sh ./httpd &

sleep 10

../../clang/bin/ab -n 300000 -c 20 http://127.0.0.1:8080/


./httpd -k stop

../../txbin-tx.sh httpd.bc

../../txbin-tsan.sh httpd.bc

popd
#COMMENT

