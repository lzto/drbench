#!/bin/bash

for ((iter=0;iter<5;iter++)) ; do


#./pbzip2-replay -p4 -f -k very_large_vm.txt
#./pbzip2-replay -p4 -f -k vm.txt >& /dev/null
#./pbzip2-replay -p2 -f -k very_large_vm.txt >& /dev/null
#./pbzip2-noreplay -p2 -f -k very_large_vm.txt >& /dev/null
#./pbzip2.tx.exe -p2 -f -k vm.txt 

	time ./pbzip2.tsan.exe -p4 -f -k vm.txt 

#sleep 1
done

