#!/bin/bash

rm *.bc *.ll *.exe *.out

echo "Stage 1 Building..."
./txbin-build.sh

echo "Stage 2 Build profiling binary..."
./txbin-prof.sh fft.bc

echo "Stage 3 Profiling binary..."
./txbin-pin.sh

echo "Stage 4 Build TX binary..."
./txbin-tx.sh fft.bc

echo "Stage 5 Build TSAN binary..."
./txbin-tsan.sh fft.bc

time ./fft.tsan.exe -p4 -m24

