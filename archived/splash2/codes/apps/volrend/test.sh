for threads in 1 2 3 4
do
for iter in 0 1 2 3 4
do
time ./VOLREND ${threads} inputs/head | grep real
done
done

