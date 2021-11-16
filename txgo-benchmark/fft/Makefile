TARGET = fft
OBJS = fft.o

CFLAGS := $(CFLAGS) -Wall -W -Wmissing-prototypes -Wmissing-declarations -Wredundant-decls -Wdisabled-optimization -g
CFLAGS := $(CFLAGS) -Wpadded -Winline -Wpointer-arith -Wsign-compare -Wendif-labels -g -fPIE -pie
LDFLAGS := $(LDFLAGS) -lm -fPIE -pie

MACROS := parmacs.pthreads.c.m4

CFLAGS := $(CFLAGS) -DENABLE_THREADS -pthread

M4=/usr/bin/m4
CC=wllvm

#CC=~/txgoto/llvm/build/bin/clang
#CFLAGS := $(CFLAGS) -fsanitize=thread -fPIE -pie -g
#LDFLAGS := $(LDFLAGS)  -fsanitize=thread -fPIE -pie -g

.PHONY:	install clean

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(TARGET) $(LDFLAGS) $(LIBS)

clean:
	rm -rf *.c *.h *.o $(TARGET)

.SUFFIXES:
.SUFFIXES:	.o .c .C .h .H

.H.h:
	$(M4) -s -Ulen -Uindex $(MACROS) $*.H > $*.h

.C.c:
	$(M4) -s -Ulen -Uindex $(MACROS) $*.C > $*.c

.c.o:
	$(CC) -c $(CFLAGS) $*.c

.C.o:
	$(M4) -s -Ulen -Uindex $(MACROS) $*.C > $*.c
	$(CC) -c $(CFLAGS) $*.c
