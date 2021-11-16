# Make file for parallel BZIP2
SHELL=/bin/sh

## Replay system paths
# Location of libutil
UTIL	:= ../../test/
# Install location for glibc-replay
PREFIX	:= $(HOME)/glibc-2.5.1/prefix/

-include $(HOME)/.replay_build

# Compiler to use
CC=g++
SPEC_FLAGS := -I$(UTIL) -I$(PREFIX)/include -DSPEC_ENABLE \
		-L$(PREFIX)/lib -Wl,-rpath,$(PREFIX)/lib -Wl,-z,now
#SPEC_FLAGS := -I$(UTIL) -I$(PREFIX)/include -DSPEC_ENABLE -DBUG \
#		-L$(PREFIX)/lib -Wl,-rpath,$(PREFIX)/lib -Wl,-z,now
SPEC_LIB   := $(UTIL)/libutil.a

all: pbzip2 pbzip2-replay pbzip2-noreplay pbzip2-fork

# Standard pbzip2 compile
pbzip2: pbzip2.cpp
	$(CC) -static -O3 -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -o pbzip2 pbzip2.cpp -pthread -lpthread -lbz2

# Replay-enabled binary
pbzip2-replay: pbzip2.cpp
	$(CC) -static -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 $(SPEC_FLAGS) -o $@ $^ -pthread -lbz2 $(SPEC_LIB)
	$(CC) -static -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 $(SPEC_FLAGS) -o $@ $^ -pthread -lbz2 $(SPEC_LIB)

pbzip2-noreplay: pbzip2.cpp
	$(CC) -static -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -DNOREPLAY_ENABLE -o $@ $^ -pthread -lbz2

pbzip2-fork: pbzip2.cpp
	$(CC) -static -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -DFORK_ENABLE -o $@ $^ -pthread -lbz2

# Choose this if you want to compile in a static version of the libbz2 library
pbzip2-static: libbz2.a pbzip2.cpp
	$(CC) -O3 -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -o pbzip2 pbzip2.cpp -pthread -lpthread -I. -L. -lbz2

# Compatability mode for 32bit file sizes (less than 2GB) and systems
# that have compilers that treat int as 64bit natively (ie: modern AIX)
pbzip2-compat: pbzip2.cpp
	$(CC) -O3 -o pbzip2 pbzip2.cpp -pthread -lpthread -lbz2

# Install the binary pbzip2 program and man page
install: pbzip2
	if ( test ! -d $(PREFIX)/bin ) ; then mkdir -p $(PREFIX)/bin ; fi
	if ( test ! -d $(PREFIX)/man ) ; then mkdir -p $(PREFIX)/man ; fi
	if ( test ! -d $(PREFIX)/man/man1 ) ; then mkdir -p $(PREFIX)/man/man1 ; fi
	cp -f pbzip2 $(PREFIX)/bin/pbzip2
	chmod a+x $(PREFIX)/bin/pbzip2
	cp -f pbzip2.1 $(PREFIX)/man/man1
	chmod a+r $(PREFIX)/man/man1/pbzip2.1

clean:
	$(RM) *.o pbzip2 pbzip2-replay pbzip2-noreplay pbzip2-fork
