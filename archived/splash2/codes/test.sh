apps=(\
#barnes \
#fmm \
ocean/contiguous_partitions \
#ocean/non_contiguous_partitions \
#radiosity \
raytrace \
volrend \
water-nsquared \
#water-spatial \
#cholesky \
fft \
#lu/contiguous_blocks \
#lu/non_contiguous_blocks \
radix \
)  

for app in ${apps[@]}
do
# setup directory
#splash_home=/home/dongyoon/spec2.6/bench/splash2/codes
splash_home=/tmp/ram/codes
if [ $app == "cholesky" ] || \
   [ $app == "fft" ] || \
   [ $app == "lu/contiguous_blocks" ] || \
   [ $app == "lu/non_contiguous_blocks" ] || \
   [ $app == "radix" ]
then
splash_home=$splash_home/kernels/$app
else
splash_home=$splash_home/apps/$app
fi
cd $splash_home

# number of threads
threadset=(1 2 3 4)
if [ $app == "ocean/contiguous_partitions" ] || \
   [ $app == "ocean/non_contiguous_partitions" ] || \
   [ $app == "fft" ] || \
   [ $app == "radix" ]
then
threadset=(1 2 4)
fi

for threads in ${threadset[@]}
do
# number of iterations
for ((iter=0;iter<10;iter++))
do
echo "Testing..."$app.$threads.$iter
# setup binary run_args
if [ $app == "barnes" ]
then
bin="BARNES"
args="input.${threads}"
./$bin < $args > /dev/null
elif [ $app == "fmm" ]
then
bin="FMM"
args="inputs/input.65536.${threads}"
./$bin < $args > /dev/null
elif [ $app == "ocean/contiguous_partitions" ]
then
bin="OCEAN"
args="-n1026 -p${threads}"
./$bin $args > /dev/null
elif [ $app == "ocean/non_contiguous_partitions" ]
then
bin="OCEAN"
args="-n258 -p${threads}"
./$bin $args > /dev/null
elif [ $app == "radiosity" ]
then
bin="RADIOSITY"
args="-batch -largeroom -p ${threads}"
./$bin $args > /dev/null
elif [ $app == "raytrace" ]
then
bin="RAYTRACE"
args="-m64 -p${threads} inputs/car.env"
./$bin $args > /dev/null
elif [ $app == "volrend" ]
then
bin="VOLREND"
args="${threads} inputs/head"
./$bin $args > /dev/null
elif [ $app == "water-nsquared" ]
then
bin="WATER-NSQUARED"
args="input.${threads}"
./$bin < $args > /dev/null
elif [ $app == "water-spatial" ]
then
bin="WATER-SPATIAL"
args="input.${threads}"
./$bin < $args > /dev/null
elif [ $app == "cholesky" ]
then
bin="CHOLESKY"
args="" ## TODO
./$bin $args > /dev/null
elif [ $app == "fft" ]
then
bin="FFT"
args="-m20 -t -p${threads}"
./$bin $args > /dev/null
elif [ $app == "lu/contiguous_blocks" ]
then
bin="LU"
args="-n2048 -p${threads}"
./$bin $args > /dev/null
elif [ $app == "lu/non_contiguous_blocks" ]
then
bin="LU"
args="-n2048 -p${threads}"
./$bin $args > /dev/null
elif [ $app == "radix" ]
then
bin="RADIX"
args="-n16777216 -p${threads}"
./$bin $args > /dev/null
else
echo "ERROR"
fi
sleep 5
done
done
done

