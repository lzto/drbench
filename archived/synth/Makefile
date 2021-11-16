
CC	:= gcc
CFLAGS	:= -O3
LDLIBS	:= -pthread -lm

UTIL	:= ../../test
PREFIX	:= $(HOME)/glibc-2.5.1/prefix

-include $(HOME)/.replay_build

SPEC_FLAGS := -I$(UTIL) -I$(PREFIX)/include -DSPEC_ENABLE \
	-L$(PREFIX)/lib -Wl,-rpath,$(PREFIX)/lib -Wl,-z,now
SPEC_LIBS  := $(UTIL)/libutil.a

PROGS	:= synth1 call-latency

BIN	:= $(PROGS) $(addsuffix -replay,$(PROGS))

all:	$(BIN)

clean:
	$(RM) $(BIN)

%:	%.c
	$(CC) -o $@ $(CFLAGS) $+ $(LDLIBS)

%-replay: %.c
	$(CC) -o $@ $(CFLAGS) $(SPEC_FLAGS) $+ $(LDLIBS) $(SPEC_LIBS)
