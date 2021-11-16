#!/bin/bash

prefix=/home/lzto/txgo/bench/mysql/sysbench/ins_dir/

pushd sysbench
#-0.4.12.7

./autogen.sh
./configure --with-mysql --prefix=${prefix}

make install
#cp -rv test $prefix

popd


