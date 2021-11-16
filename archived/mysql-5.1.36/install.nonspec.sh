#STATIC binary w/ NOREPLAY: for original MySQL numbers
env CPPFLAGS='-DNOREPLAY_ENABLE' ./configure --prefix=/home/jflinn/mysql-nonspec --with-client-ldflags=-all-static --with-mysqld-ldflags=-all-static
