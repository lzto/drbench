#!/bin/bash

APP_BC=$1 #pbzip2.bc
APP_EXE=$2 #pbzip2.bc.exe

clang++ -static -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -o $APP_EXE $APP_BC -lpthread -lbz2



# LOG FROM WLLVM
#['/home/dongyoon/project/llvm-3.4.2/bin/clang++',
# '-static',
# '-O3',
# '-D_LARGEFILE64_SOURCE',
# '-D_FILE_OFFSET_BITS=64',
# '-o',
# 'pbzip2',
# 'pbzip2.cpp',
# '-pthread',
# '-lpthread',
# '-lbz2']
