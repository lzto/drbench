for threads in 1 2 3 4
do
for iter in 0 1 2 3 4
do
time ./LU -n2048 -p${threads} > /dev/null
done
done

