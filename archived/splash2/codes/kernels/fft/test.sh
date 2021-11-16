for threads in 1 2 4
do
for iter in 0 1 2 3 4
do
time ./FFT -m20 -p${threads} -t > /dev/null
done
done

