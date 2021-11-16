CC=clang
CXX=clang++
CFLAGS=-g -O3 #-Wall 
BC_CFLAGS=-g -c -emit-llvm
LDFLAGS=-pthread
SOURCES=test_threads.c test_hello.c test_malloc.cc test_race1.c test_if.c
#OBJECTS=$(SOURCES:.c=.o)
BITCODES=$(SOURCES:.c=.bc) $(SOURCES:.cc=.bc)
#CALLGRAPHS=$(SOURCES:.c=.png)

EXECUTABLE=test_race1

all: $(OBJECTS) $(BITCODES) $(CALLGRAPHS) $(EXECUTABLE)


%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

#.c.o:
#	$(CC) $(CFLAGS) $(LDFLAGS) $< -o $@

%.bc:	%.c
	$(CC) $(BC_CFLAGS) $< -o $@

%.bc:	%.cc
	$(CXX) $(BC_CFLAGS) $< -o $@

#%.png:	%.bc
#	opt -analyze -dot-callgraph $<
#	dot -Tpng -o$@ callgraph.dot

clean:
	rm -rf *.o *.png *.dot *.ll *.bc *.exe *.out


test_race1:
	$(CC) test_race1.bc $(CFLAGS) -o test_race1 $(LDFLAGS)

