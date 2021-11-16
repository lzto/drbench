#!/bin/bash
if [ -z $1 ]; then
	echo build type not specified
	exit
fi

if [ ! -e $1 ];then
	echo $1 does no exists
	exit
fi

if [ $1 == "txtsan" ];then
	suffix=".tsan.exe"
fi


pushd $1

cp ../httpd.conf conf/httpd.conf

bin/httpd${suffix} -k stop
bin/httpd${suffix} -DFOREGROUND & 

sleep 10


../clang/bin/ab -n 300000 -c 20 http://127.0.0.1:8080/


bin/httpd${suffix} -k stop
sleep 1
bin/httpd${suffix} -k stop

popd

