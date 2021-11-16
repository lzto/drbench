for threads in 4
do
for ((iter=0;iter<100;iter))
do
sudo ./OCEAN -n1026 -p${threads} > /dev/null
sleep 10
done
done

