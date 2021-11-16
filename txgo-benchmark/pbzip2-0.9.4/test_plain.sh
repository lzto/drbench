#!/bin/bash

for ((iter=0;iter<10;iter++)) ; do
	./pbzip2.tx.exe -p2 -f -k -1 -1 -b1 vm.txt
done

