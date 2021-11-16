#for thread in 1 2 3 4
for thread in 2 
do
for((iter=0;iter<1;iter++))
do
./pfscan -n${thread} -r1 asdfqwefqwe messages
sleep 5 
done
done
