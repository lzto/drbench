#!/bin/bash

#LLVM
LLVM_HOME=/opt/spec/tools-root

# INPUT: BC FILE NAME
TXBIN_INPUT_BC=$1 # XYZ.bc

if [ "${TXBIN_INPUT_BC}" = "" ];then
  echo "[ERROR] TXBIN_INPUT_BC is NULL"
  exit 1
fi

if [ ! "${TXBIN_INPUT_BC: -3}" = ".bc" ];then
  echo "[ERROR] TXBIN_INPUT_BC does not end with .bc"
  exit 1
fi

# TXBIN_APP
TXBIN_APP=`echo ${TXBIN_INPUT_BC}| cut -d'.' -f 1`  # take the 1st substring for app name

# LLVM 
LLVM_OPT=${LLVM_HOME}/bin/opt
LLVM_DIS=${LLVM_HOME}/bin/llvm-dis
TXBIN_COMPILER=${LLVM_HOME}/bin/clang++
TXBIN_COMPILER_OPT=-O3
TXBIN_LD_LIBRARY=
TXBIN_LIBS="$LLVM_HOME/lib/libTxHooks.a
	$LLVM_HOME/lib/libtsan_rtl.a
	$LLVM_HOME/lib/libtsan_icp.a
	$LLVM_HOME/lib/libtsan_san.a 
	-lpthread
	-lbz2
	-ldl
	"

# OUTPUT: BC FILE NAME
TXBIN_OUTPUT_BC=${TXBIN_APP}.tsan.bc
TXBIN_OUTPUT_LL=${TXBIN_APP}.tsan.ll
TXBIN_OUTPUT_EXE=${TXBIN_APP}.tsan.exe

# LLVM LIBS
TXBIN_LLVM_LIBS="\
-load ${LLVM_HOME}/lib/libRCSID.so \
-load ${LLVM_HOME}/lib/libRCSCFG.so \
-load ${LLVM_HOME}/lib/libRCSPointerAnalysis.so \
-load ${LLVM_HOME}/lib/RCSSourceLocator.so \
-load ${LLVM_HOME}/lib/RCSAATester.so \
-load ${LLVM_HOME}/lib/libDynAAUtils.so \
-load ${LLVM_HOME}/lib/libDynAAAnalyses.so \
-load ${LLVM_HOME}/lib/libDynAACheckers.so \
-load ${LLVM_HOME}/lib/libDynAAInstrumenters.so \
-load ${LLVM_HOME}/lib/libDynAATransforms.so"

# RUN LLVM PASS
TXBIN_LOG=tx-${TXBIN_APP}.log
TXBIN_OPT_CMD="${LLVM_OPT} ${TXBIN_LLVM_LIBS} -tx-instrument -log ${TXBIN_APP}.prof.out -musthook musthook.txt -tx-tsan -o ${TXBIN_OUTPUT_BC} ${TXBIN_INPUT_BC}"

#echo "${TXBIN_OPT_CMD} > ${TXBIN_LOG} 2>&1"
#${TXBIN_OPT_CMD} > ${TXBIN_LOG} 2>&1
echo "${TXBIN_OPT_CMD}"
${TXBIN_OPT_CMD}

# CREATE (readable) LL FILE
echo "${LLVM_DIS} ${TXBIN_OUTPUT_BC} -o ${TXBIN_OUTPUT_LL}"
${LLVM_DIS} ${TXBIN_OUTPUT_BC} -o ${TXBIN_OUTPUT_LL}

# BUILD EXECUTABLE (BACKEND)
echo "clang++ -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -o ${TXBIN_OUTPUT_EXE} ${TXBIN_OUTPUT_BC} ${TXBIN_LIBS}"
clang++ -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -o ${TXBIN_OUTPUT_EXE} ${TXBIN_OUTPUT_BC} ${TXBIN_LIBS}


