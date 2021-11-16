# Make file for parallel BZIP2

# Compiler to use
CC=g++

# TxBin
TXBIN_CC=wllvm++

CLANG=~/txgoto/llvm/build/bin/clang++

all: pbzip2 pbzip2-txbin

# Standard pbzip2 compile
pbzip2: pbzip2.cpp
	$(CC) -g -O3 -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -o pbzip2 pbzip2.cpp -pthread -lpthread -lbz2

pbzip2-txbin: pbzip2.cpp
	$(TXBIN_CC) -g -O3 -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -o pbzip2 pbzip2.cpp -lpthread -lbz2

# Choose this if you want to compile in a static version of the libbz2 library
pbzip2-static: libbz2.a pbzip2.cpp
	$(CC) -static -O3 -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -o pbzip2 pbzip2.cpp -pthread -lpthread -I. -L. -lbz2

# Compatability mode for 32bit file sizes (less than 2GB) and systems
# that have compilers that treat int as 64bit natively (ie: modern AIX)
pbzip2-compat: pbzip2.cpp
	$(CC) -O3 -o pbzip2 pbzip2.cpp -pthread -lpthread -lbz2

clean:
	$(RM) .*.bc *.bc *.ll *.exe *.out pin.log *.bz2 *.o pbzip2 pbzip2-replay pbzip2-noreplay pbzip2-fork

pbzip2-gtsan:
	$(CLANG) -fsanitize=thread -fPIE -pie -g -O3 -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -o pbzip2-gtsan pbzip2.cpp -pthread -lpthread -lbz2

