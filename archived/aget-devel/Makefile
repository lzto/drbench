# EnderUNIX Aget Makefile
# http://www.enderunix.org/aget/

## Replay system paths
# Location of libutil
UTIL=../../test
# Install location for glibc-replay
PREFIX=$(HOME)/glibc-2.5.1/prefix

-include $(HOME)/.replay_build

############## RESPEC ##################
## dynamic
#SPEC_FLAGS := -I$(UTIL) -I$(PREFIX)/include -DSPEC_ENABLE \
		-L$(PREFIX)/lib -Wl,-rpath,$(PREFIX)/lib -Wl,-z,now
## static
SPEC_FLAGS := -static -I$(UTIL) -I$(PREFIX)/include -DSPEC_ENABLE \
	      -L$(PREFIX)/lib

SPEC_LIB   := $(UTIL)/libutil.a

############## NOREPLAY ##################
#SPEC_FLAGS := -static -DNOREPLAY_ENABLE

OBJS = main.o Aget.o Misc.o Head.o Signal.o Download.o Ftp.o Resume.o loadrc.o
CFLAGS = -g -Wall 
LDFLAGS = -pthread
CC = gcc
STRIP = strip

################################
## NOREPLAY
#CFLAGS+= -static -DNOREPLAY_ENABLE
#LDFLAGS+= -static

## FORK
#CFLAGS+= -static -DFORK_ENABLE
#LDFLAGS+= -static

## SPEC
CFLAGS+=$(SPEC_FLAGS)
LDFLAGS+=$(SPEC_FLAGS)
LIBS+=$(SPEC_LIB)




all: aget

aget: $(OBJS)
	$(CC) $(CFLAGS) -o aget -g $(OBJS) $(LDFLAGS) $(LIBS)

install: aget
	cp -f aget /usr/local/bin/aget

clean:
	rm -f *.o aget
