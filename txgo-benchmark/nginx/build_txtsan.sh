#!/bin/bash

TEST_DIR=`pwd`

source ~/txgo/sourceme.sh

rm -rf ./nginx-1.9.1

tar xf nginx-1.9.1.tar.gz

prefix=`pwd`/txtsan

pushd nginx-1.9.1

CC=wllvm \
CXX=wllvm++ \
CFLAGS="-Ofast -g" \
./configure \
--prefix=$prefix \
--with-ld-opt="-Ofast -g" \
--with-cc-opt="-Ofast -g"


make -j10

make install

popd

#:<<COMMENT

cp ${TEST_DIR}/nginx.conf ${prefix}/conf/nginx.conf

pushd ${prefix}/sbin

cp ${TEST_DIR}/musthook.txt .

/home/lzto/txgo/whole-program-llvm/extract-bc nginx
/opt/spec/tools-root/bin/llvm-dis -o httpd.ll nginx.bc

../../txbin-prof.sh nginx.bc

../../txbin-pin.sh ./nginx & 

../../../apache2/clang/bin/ab -n 300000 -c 20 http://127.0.0.1:8080/

./nginx.prof.exe -s stop

../../txbin-tx.sh nginx.bc

../../txbin-tsan.sh nginx.bc

popd
#COMMENT

