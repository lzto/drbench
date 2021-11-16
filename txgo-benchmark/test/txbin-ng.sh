#!/bin/bash

#LLVM
LLVM_HOME=/home/dongyoon/project/llvm-3.4.2

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
TXBIN_LIBS="-lm -lpthread $LLVM_HOME/lib/libDynAAMemoryHooks.a"

# OUTPUT
TXBIN_OUTPUT_BC=${TXBIN_APP}.ng.bc # XYZ.ng.bc
TXBIN_OUTPUT_LL=${TXBIN_APP}.ng.ll # XYZ.ng.ll
TXBIN_OUTPUT_EXE=${TXBIN_APP}.ng.exe # XYZ.ng.exe

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
TXBIN_LOG=ng-${TXBIN_APP}.log
TXBIN_OPT_CMD="${LLVM_OPT} ${TXBIN_LLVM_LIBS} -instrument-memory -prepare -hook-all-pointers -o ${TXBIN_OUTPUT_BC} ${TXBIN_INPUT_BC}"

#echo "${TXBIN_OPT_CMD} > ${TXBIN_LOG} 2>&1"
#${TXBIN_OPT_CMD} > ${TXBIN_LOG} 2>&1
echo "${TXBIN_OPT_CMD}"
${TXBIN_OPT_CMD}

# CREATE (readable) LL FILE
echo "${LLVM_DIS} ${TXBIN_OUTPUT_BC} -o ${TXBIN_OUTPUT_LL}"
${LLVM_DIS} ${TXBIN_OUTPUT_BC} -o ${TXBIN_OUTPUT_LL}

# BUILD EXECUTABLE (BACKEND)
echo "${TXBIN_COMPILER} ${TXBIN_COMPILER_OPT} ${TXBIN_OUTPUT_BC} -o ${TXBIN_OUTPUT_EXE} ${TXBIN_LD_LIBRARY} ${TXBIN_LIBS}"
${TXBIN_COMPILER} ${TXBIN_COMPILER_OPT} ${TXBIN_OUTPUT_BC} -o ${TXBIN_OUTPUT_EXE} ${TXBIN_LD_LIBRARY} ${TXBIN_LIBS} 


