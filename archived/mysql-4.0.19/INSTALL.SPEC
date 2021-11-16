#STATIC binary w/ SPEC_ENABLE: for DoublePlay numbers
env CPPFLAGS='-I/home/kaushikv/glibc-2.5.1-replay/prefix/include -I/home/kaushikv/spec2.6/test -g -DSPEC_ENABLE -DMYSQL_BUG_3596' LDFLAGS='-L/home/kaushikv/glibc-2.5.1-replay/prefix/lib' LIBS='/home/kaushikv/spec2.6/test/libutil.a' ./configure --prefix=/tmp/ram/mysql --with-client-ldflags=-all-static --with-mysqld-ldflags=-all-static

------
Jie Yu's instructions for installing mysql-4.0.19: http://www.eecs.umich.edu/~jieyu/bugs/mysql-3596/INSTALL

------
bug-init.sql

create database testdb;
create table testdb.nameage(name VARCHAR(20), age INT);
create table testdb.idnameage(id MEDIUMINT NOT NULL AUTO_INCREMENT, name VARCHAR(20), age INT, primary key(id));

insert into testdb.nameage values ("aaa", 10);
insert into testdb.idnameage values (1, "aab", 20);

------

#Set up database as a regular user
mkdir /tmp/ram
cd spec2.6/bench/mysql-4.0.19
make install
cd /tmp/ram/mysql
sudo chown mysql -R .
sudo chgrp mysql -R .
su mysql
bin/mysql_install_db --user=mysql --force
bin/mysqld_safe --user=mysql --default-table-type=INNODB &
bin/mysql -u root < /tmp/bug-init.sql

#KILL mysql and save the database for later use
sudo ps auxw | grep mysql
sudo kill -9 <pid>
cp -r /tmp/ram/mysql ~/mysql-saved

------

#Copy saved database to /tmp/ram
mkdir /tmp/ram
cp -r ~/mysql-saved /tmp/ram/mysql

#Next run mysql w/TP:
sudo su
cd spec2.6/test
./setup.sh
echo 0 > /proc/sys/kernel/replay_min_debug
cd /tmp/ram/mysql
sudo chown mysql -R .
sudo chgrp mysql -R .
su mysql
bin/mysqld_safe --user=mysql --default-table-type=INNODB &

#Then, run client code to trigger the bug from two separate consoles
bin/mysql -u root -e 'show innodb status' >& /dev/null
bin/mysql -u root -D testdb -e 'select * from idnameage' >& /dev/null

------------
