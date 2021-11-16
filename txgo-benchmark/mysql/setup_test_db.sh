#!/bin/bash

if [ "$1" == "" ]; then
	echo need specify build type
	exit 1
fi

if [ ! -e $1 ]; then
	echo $1 does not exists!
	exit 1
fi

echo preparing

BENCHDIR=/home/lzto/txgo/bench/mysql/

BASEDIR=/home/lzto/txgo/bench/mysql/ms_basedir/
SOCKET=/tmp/ms.socket
SYSBENCHDIR=${BENCHDIR}/sysbench/
TABLE_SIZE=1000000
rm -rf ${BASEDIR}

pushd $1

#alwayd install db from clang bulid
pushd ../clang

echo install initial db

./scripts/mysql_install_db --defaults-file=${BENCHDIR}/my.cnf --datadir=${BASEDIR}

cp ${BENCHDIR}/my.cnf ${BASEDIR}

echo "start mysqld[safemode]"

./bin/mysqld_safe --defaults-file=${BASEDIR}/my.cnf --datadir=${BASEDIR} --socket=${SOCKET} -v & 

while [ ! -e "${SOCKET}" ];do
	sleep 1
done

echo "create sbtest"

./bin/mysqladmin --socket=${SOCKET} -u root create sbtest

echo prepar using sysbench

${SYSBENCHDIR}/ins_dir/bin/sysbench \
	--test=${SYSBENCHDIR}/sysbench/sysbench/tests/db/oltp.lua \
	--oltp-table-size=${TABLE_SIZE} \
	--mysql-user=root \
	--mysql-socket=${SOCKET} \
	prepare

echo "shutdown mysqld[safemode]"
./bin/mysqladmin --socket=${SOCKET} -u root shutdown

popd
#db initialization finished

sleep 10

echo "starting mysqld"

./bin/mysqld --defaults-file=${BASEDIR}/my.cnf --datadir=${BASEDIR} --socket=${SOCKET} --thread_cache_size=100 &

while [ ! -e "${SOCKET}" ];do
	sleep 1
done

echo "start sysbench"

mkdir -p ${BENCHDIR}/log

${SYSBENCHDIR}/ins_dir/bin/sysbench \
	--test=${SYSBENCHDIR}/sysbench/sysbench/tests/db/oltp.lua \
	--oltp-table-size=${TABLE_SIZE} \
	--db-driver=mysql \
	--mysql-table-engine=innodb \
	--mysql-user=root \
	--mysql-socket=${SOCKET} \
	--num-threads=2 \
	--max-time=30 \
	--report-interval=5 \
	run 2>&1 | tee ${BENCHDIR}/log/bench-result-${1}-`date +%h%d%Y-%H%M%S`.log

:<<COMMENTX
	--oltp-skip-trx=on \
	--max-requests=200 \
	--oltp-simple-ranges=0 \
	--oltp-sum-ranges=0 \
	--oltp-order-ranges=0 \
	--oltp-index-updates=0 \
	--oltp-distinct-ranges=0 \
	--oltp-non-index-updates=0 \
	run 
COMMENTX

echo "shutdown mysqld"

./bin/mysqladmin --socket=${SOCKET} -u root shutdown

popd

