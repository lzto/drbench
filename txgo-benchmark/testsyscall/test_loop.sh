#!/bin/bash
#test script
exefile=$1

execmd=$exefile

loops=$2

for ((iter=0;iter<loops;iter++)) ; do
	echo "iter $iter"
	time $execmd
	echo "-----------------------------------------------------"
#	sleep 1
done

