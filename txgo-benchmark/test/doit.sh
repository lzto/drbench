#!/bin/bash

#XBC="test_threads"
#XBC="test_hello"
XBC="test_race1"

echo "Stage 1 Building..."
#./txbin-build.sh
make clean 
make

echo "Stage 2 Build profiling binary..."
./txbin-prof.sh ${XBC}.bc

echo "Stage 3 Profiling binary..."
./txbin-pin.sh $XBC

echo "Stage 4 Build TX binary..."
./txbin-tx.sh ${XBC}.bc

echo "Stage 5 Build TSAN binary..."
./txbin-tsan.sh ${XBC}.bc

echo "TESTING"
echo "ORIG TIME"
./test_loop.sh "./${XBC}" 1
echo "TSAN TIME"
./test_loop.sh "./${XBC}.tsan.exe" 1

