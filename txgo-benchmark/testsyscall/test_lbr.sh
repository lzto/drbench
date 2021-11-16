#!/bin/bash

exe="./tntx.tx.exe"

sudo ${exe} > output.log.tmp
#${exe} > output.log.tmp

grep "^0x" output.log.tmp >output.log

while read line; do
	fromaddr=`echo $line | cut -d'-' -f1`
	toaddr=`echo $line | cut -d'>' -f2`
	echo "FROM:$fromaddr"
	addr2line -e ${exe} -f -a $fromaddr
	echo "TO:$toaddr"
	addr2line -e ${exe} -f -a $toaddr
	echo "--------"
done<output.log

