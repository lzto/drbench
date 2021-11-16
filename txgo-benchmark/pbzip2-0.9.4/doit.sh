#!/bin/bash

source ~/txgo/sourceme.sh

echo "Stage 1 Building..."
./txbin-build.sh

echo "Stage 2 Build profiling binary..."
./txbin-prof.sh pbzip2.bc

echo "Stage 3 Profiling binary..."
./txbin-pin.sh

echo "Stage 4 Build TX binary..."
./txbin-tx.sh pbzip2.bc

echo "Stage 5 Build TSAN binary..."
./txbin-tsan.sh pbzip2.bc

