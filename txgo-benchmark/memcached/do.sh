#!/bin/bash

#:<<COMMENT0
make clean 
CC=/home/lzto/txgoto/llvm/build/bin/clang \
CXX=/home/lzto/txgoto/llvm/build/clang++ \
CFLAGS="-g -Ofast -march=native -pipe -fsanitize=thread" \
./configure
make
mv memcached memcached.gtsan
#COMMENT0

:<<COMMENT1
make clean
CC=gcc CXX=g++ CFLAGS="-Ofast -march=native -pipe" ./configure
make
mv memcached memcached.orig.gcc
COMMENT1

:<<COMMENT2

make clean 
CC=wllvm CXX=wllvm++ CFLAGS="-Ofast -march=native -pipe" ./configure
make
mv memcached memcached.orig.clang

/home/lzto/txgo/whole-program-llvm/extract-bc memcached.orig.clang
mv memcached.orig.clang.bc memcached.bc
/opt/spec/tools-root/bin/llvm-dis -o memcached.ll memcached.bc

#build prof bin
./txbin-prof.sh memcached.bc

#do profiling
#./txbin-pin.sh memcached

#build tx

./txbin-tx.sh memcached.bc

#build tsan

./txbin-tsan.sh memcached.bc

COMMENT2

