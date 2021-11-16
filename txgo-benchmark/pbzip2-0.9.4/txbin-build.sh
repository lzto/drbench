#!/bin/bash

source ~/txgo/sourceme.sh

##################################################################

# build binary using WLLVM
make pbzip2-txbin

# extract bc from binary -- doesn't need to use extract-bc as pbzip2 is based on a single source file
#echo "extract-bc pbzip2"
extract-bc pbzip2
#cp .pbzip2.bc pbzip2.bc

# make readable ll file
echo "llvm-dis -o pbzip2.ll pbzip2.bc"
llvm-dis -o pbzip2.ll pbzip2.bc

