# Make file for a simple pthread program
SHELL=/bin/sh

## Replay system paths
# Location of libutil
UTIL	:= ../../test/
# Install location for glibc-replay
PREFIX	:= $(HOME)/glibc-2.5.1-replay/prefix/

-include $(HOME)/.replay_build

# Compiler to use
CC=g++
PTHREAD_FLAGS := -I$(UTIL) -I$(PREFIX)/include \
		-L$(PREFIX)/lib -Wl,-rpath,$(PREFIX)/lib -Wl,-z,now
SPEC_FLAGS := -I$(UTIL) -I$(PREFIX)/include -DSPEC_ENABLE \
		-L$(PREFIX)/lib -Wl,-rpath,$(PREFIX)/lib -Wl,-z,now
SPEC_LIB   := $(UTIL)/libutil.a

all: test-noreplay test-replay

# Replay-enabled binary
test-replay: test.c
	$(CC) -static -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 $(SPEC_FLAGS) -o $@ $^ -pthread -lbz2 $(SPEC_LIB)

test-noreplay: test.c
	$(CC) -static -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -DNOREPLAY_ENABLE $(PTHREAD_FLAGS) -o $@ $^ -pthread -lbz2 $(SPEC_LIB)

clean:
	$(RM) *.o test-replay test-noreplay