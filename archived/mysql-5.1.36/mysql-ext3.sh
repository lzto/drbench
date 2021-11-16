/sbin/insmod /home/kaushikv/spec2.6/test/dev/spec.ko
mknod /dev/spec0 c 149 0
#echo 1 > /proc/sys/kernel/replay_debug
#echo 5 > /proc/sys/kernel/hung_task_timeout_secs
#echo 1 > /proc/sys/kernel/replay_min_debug
#echo 1 > /proc/sys/kernel/spec_replay_debug
#echo 100000 > /proc/sys/kernel/syslog_recs
echo 0 > /proc/sys/kernel/record_min_cpuid
echo 3 > /proc/sys/kernel/record_max_cpuid
echo 4 > /proc/sys/kernel/replay_min_cpuid
echo 7 > /proc/sys/kernel/replay_max_cpuid
rm -rf /home/kaushikv/mysql

cd /home/kaushikv/spec2.6/bench/mysql-5.1.36
#cd /home/kaushikv/spec2.6/bench/mysql-5.1.36-NOREP
make install

## INSTALL DB
cd /home/kaushikv/mysql/bin
./mysql_install_db --user=root
sleep 1
## START MYSQL
./mysqld_safe --user=root &
sleep 1
## CREATE DATABASE SBTEST
./mysqladmin -u root create sbtest
sleep 1
## CREATE TABLE(innodb) And FILL THE TABLE W/ 1000 RECORDS
cd /home/kaushikv/spec2.6/bench/sysbench-0.4.12/prefix/bin/
./sysbench --test=oltp --oltp-table-size=1000 --mysql-user=root --mysql-socket=/tmp/mysql.sock prepare
sleep 1
## STOP MYSQL 
cd /home/kaushikv/mysql/bin
./mysqladmin -u root shutdown
sleep 1
## START MYSQL W/ REPLAY
cd /home/kaushikv/mysql/libexec
./mysqld -V --basedir=/home/kaushikv/mysql --datadir=/home/kaushikv/mysql/var --user=root --thread_cache_size=100
