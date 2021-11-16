# Makefile for pfscan

#CC=gcc
LDOPTS=-Wl,-s 
LIBS=-lpthread -lnsl

CC=~/txgoto/llvm/build/bin/clang
LDOPTS := $(LDOPTS) -fsanitize=thread -fPIE -pie -g
#-DBUG

CC=wllvm
LDOPTS=-g -O0

OBJS = pfscan.o bm.o version.o pqueue.o

%.o: %.c 
	$(CC) $(LDOPTS) -c -o $@ $< 


all: pfscan

pfscan: $(OBJS)
	$(CC) $(LDOPTS) -o pfscan $(OBJS) $(LIBS)

version:
	(PACKNAME=`basename \`pwd\`` ; echo 'char version[] = "'`echo $$PACKNAME | cut -d- -f2`'";' >version.c)

clean distclean:
	-rm -f *.o *~ pfscan core manpage.* \#*



