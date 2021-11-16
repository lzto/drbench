ALL: clean tngtsan tntx timg

#VERSION=SLOW
VERSION=MEDIUM
#VERSION=FAST
#VERSION=RACE

tntx:
	$(WLLVM) -g test_race1.c -o tntx -lpthread -D${VERSION}
	extract-bc tntx
	llvm-dis -o tntx.ll tntx.bc
#	g++ -D_USE_TM_ -std=c++11 -I../tsx-tools/include/ test_rtm.cpp -o test_rtm -lpthread
#	opt test_rtm.bc -dot-callgraph -dot-cfg
#	dot -Tpdf 

clean:
	rm -f tntx tntx.log timg

test:
	echo `time ./tntx > tntx.log`

tngtsan:
	/home/lzto/txgoto/llvm/build/bin/clang -g -fsanitize=thread test_race1.c -o tngtsan -D${VERSION}

timg: clean
	clang++ -g test_race1.c -o timg /opt/spec/tools-root/lib/libtsan_rtl.a       /opt/spec/tools-root/lib/libtsan_icp.a  /opt/spec/tools-root/lib/libtsan_san.a  -ldl -lpthread  -DSLOW



