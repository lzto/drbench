export LD_BIND_NOW=1

#file=README.glibc 		# 95  B
#file=glibc-1.09-crypt.tar.gz	# 29  KB
#file=glibc-1.09.1.tar.gz	# 1.6 MB
file=glibc-2.9.tar.gz 		# 21  MB

ORIG=$HOME/files

#URL=http://ftp.gnu.org/gnu/glibc/${file}
URL=http://covirt5.eecs.umich.edu/~dongyoon/${file}

if [ ! -f $ORIG/$file ]; then
    echo "Downloading reference copy of file..."
    mkdir -p $ORIG
    wget -q -O $ORIG/$file $URL
fi

grep -q $file .md5sum 2>/dev/null || (cd $ORIG; md5sum $file) >> .md5sum

for thread in 1 2 3 4
do
for((iter=0;iter<10;iter++))
do
rm -f ${file}
./aget -n ${thread} $URL
sleep 5
while `grep 'exists pid' /proc/spec`; do
    echo "Waiting for speculation to end"
    sleep 5
done
if ! grep $file .md5sum | md5sum --status -c -; then
    echo "*************************************************"
    echo "   Last run was invalid: download is corrupted."
    echo "*************************************************"
    exit 1
fi
done
done
