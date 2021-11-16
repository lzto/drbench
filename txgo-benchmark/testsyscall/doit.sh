#!/bin/bash

rm tngtsan

make tngtsan

rm *.out

source  ~/txgo/sourceme.sh

#rm *.bc *.ll *.exe *.out

echo "Stage 1 Building..."
WLLVM=wllvm++ make

echo "Stage 2 Build profiling binary..."
./txbin-prof.sh tntx.bc

echo "Stage 3 Profiling binary..."
./txbin-pin.sh

echo "Stage 4 Build TX binary..."
./txbin-tx.sh tntx.bc

echo "Stage 5 Build TSAN binary..."
./txbin-tsan.sh tntx.bc

#time ./tntx.tsan.exe

#echo "Stage 6 optimized tsan"

#llvm-as  tntx.tsan_optimized.ll  -o tntx.tsan_optimized.bc
#/opt/spec/tools-root/bin/clang++ -o tntx.tsan_optimized.exe tntx.tsan_optimized.bc  /opt/spec/tools-root/lib/libTxHooks.a /opt/spec/tools-root/lib/libtsan_rtl.a /opt/spec/tools-root/lib/libtsan_icp.a /opt/spec/tools-root/lib/libtsan_san.a  -ldl -lpthread



