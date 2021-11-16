for threads in 1 2 3 4
do
for iter in 0 1 2 3 4
do
time ./RAYTRACE -m64 -p${threads} inputs/car.env > /dev/null
done
done

