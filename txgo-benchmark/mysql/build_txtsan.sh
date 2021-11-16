#!/bin/bash

source ~/txgo/sourceme.sh

prefix=`pwd`/txtsan

pushd mysql-5.6.24

mkdir -p build-txtsan

pushd build-txtsan


CC=wllvm \
CXX=wllvm++ \
LD=wllvm \
cmake .. \
-DCMAKE_INSTALL_PREFIX=$prefix

make -j10

make install

cd sql

link_mysql_cmd="/opt/spec/tools-root/bin/clang++"`cat CMakeFiles/mysqld.dir/link.txt|cut -d' ' -f2-`
echo $link_mysqld_cmd
$link_mysqld_cmd

cd ..

cp sql/mysqld $prefix/bin/mysqld


:<<COMMENT

pushd bin

cp ../../../musthook.txt .

/home/lzto/txgo/whole-program-llvm/extract-bc mysqld
/opt/spec/tools-root/bin/llvm-dis -o mysqld.ll mysqld.bc

../../../txbin-prof.sh mysqld.bc

../../../txbin-pin.sh mysqld

../../../txbin-tx.sh mysqld.bc

../../../txbin-tsan.sh mysqld.bc

popd
COMMENT

#build-clang
popd

#mysql-5.6.24
popd


