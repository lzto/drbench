#!/bin/bash
:<<COMMENT
CLANG_BIN=$(which clang)
if ! [ -n "$CLANG_BIN" ] ; then
  echo "Add llvm into your PATH"
  exit 1
fi

WLLVM_BIN=$(which wllvm)
if ! [ -n "$WLLVM_BIN" ] ; then
  echo "Add wllvm into your PATH"
  exit 1
fi

# WLLVM
export WLLVM_OUTPUT=DEBUG
export LLVM_COMPILER=clang
COMMENT
##################################################################

# build binary using WLLVM
make

# extract bc from binary -- doesn't need to use extract-bc as pbzip2 is based on a single source file
#echo "extract-bc pbzip2"
extract-bc pfscan
#cp .pbzip2.bc pbzip2.bc

# make readable ll file
echo "llvm-dis -o pfscan.ll pfscan.bc"
llvm-dis -o pfscan.ll pfscan.bc
