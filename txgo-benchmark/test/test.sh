#!/bin/bash
#test script
exefile=$1

execmd=$exefile


loops=$2

function dyn_analysis
{
	output=$1
	output=`echo $output| sed -e "s/ /\n/g"`
	total=`printf "$output"|wc -l`
	output=($output)
	cnt=0
	while [ $cnt -le $total ];do
		exeimg=${output[cnt]}
		raddr=${output[cnt+1]}
		echo "=>" $exeimg $raddr
		exeimg=`echo $exeimg| sed -e "s/(.*)//g"`
		raddr=`echo $raddr|sed -e "s/\(\[\|\]\)//g"`
		echo "addr2line -e $exeimg -f -C $raddr"
		addr2line -e $exeimg -f -C $raddr
		let cnt+=2
	done

}

function sta_analysis
{
	output=$1
	output=`echo $output| sed -e "s/ /\n/g"`
	total=`printf "$output"|wc -l`
	output=($output)
	cnt=1
	while [ $cnt -le $total ];do
		exeimg=$exefile
		raddr=${output[cnt]}
		echo "=>" $exeimg $raddr
		exeimg=`echo $exeimg| sed -e "s/(.*)//g"`
		raddr=`echo $raddr|sed -e "s/\(\[\|\]\)//g"`
		echo "addr2line -e $exeimg -f -C $raddr"
		addr2line -e $exeimg -f -C $raddr
		let cnt+=1
	done
}


for ((iter=0;iter<loops;iter++)) ; do
	echo "iter $iter"
	output=`$execmd|grep \]`
	isdyn=`file $exefile|grep "dynamically linked"`
	if [ -z "$output" ]; then
		echo "no race detected"
	elif [ -n "$isdyn" ]; then
		echo "dyn"
		dyn_analysis "$output"
	else
		sta_analysis "$output"
	fi
	echo "-----------------------------------------------------"
	sleep 1
done

:<<COMMENT
for ((iter=0;iter<2;iter++)) ; do
	time ./pbzip2.tx.exe -p2 -f -k vm.txt 
	#./pbzip2.tsan.exe -p4 -f -k vm.txt 
	sleep 1
done
COMMENT

