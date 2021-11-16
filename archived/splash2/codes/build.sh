apps=(\
barnes \
fmm \
ocean/contiguous_partitions \
ocean/non_contiguous_partitions \
radiosity/glibdumb \
radiosity/glibps \
radiosity \
raytrace \
volrend/libtiff \
volrend \
water-nsquared \
water-spatial \
cholesky \
fft \
lu/contiguous_blocks \
lu/non_contiguous_blocks \
radix)  

for app in ${apps[@]}; do
    splash_home=`pwd`
    case "$app" in
        cholesky|fft|lu/contiguous_blocks|lu/non_contiguous_blocks|radix)
            splash_home=$splash_home/kernels/$app
            ;;
        *)
            splash_home=$splash_home/apps/$app
            ;;
    esac
    (cd $splash_home
     echo "Rebuilding $app"
     make clean
     make
    ) || exit $?
done
