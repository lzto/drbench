NTHREAD=4
NREQUESTS=5000
#echo 0 > /proc/sys/kernel/replay_min_debug
#echo 10000 > /proc/sys/kernel/replay_max_requests
#echo 200000 > /proc/sys/kernel/syslog_recs
echo 0 > /proc/sys/kernel/replay_num_of_requests
/home/kaushikv/spec2.6/bench/sysbench-0.4.12/prefix/bin/sysbench --test=oltp --oltp-table-size=1000 --mysql-user=root --mysql-socket=/tmp/mysql.sock --num-threads=${NTHREAD} --max-requests=${NREQUESTS} --oltp-test-mode=simple run
#/home/kaushikv/spec2.6/bench/sysbench-0.4.12/prefix/bin/sysbench --test=oltp --oltp-table-size=1000 --mysql-user=root --mysql-socket=/tmp/mysql.sock --num-threads=${NTHREAD} --max-requests=${NREQUESTS} --oltp-test-mode=complex run
#/home/kaushikv/spec2.6/bench/sysbench-0.4.12/prefix/bin/sysbench --test=oltp --oltp-table-size=1000 --mysql-user=root --mysql-socket=/tmp/mysql.sock --num-threads=${NTHREAD} --max-requests=${NREQUESTS} --oltp-test-mode=nontrx --oltp-nontrx-mode=update_key run
