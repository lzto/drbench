
# profile call instructions that calls library functions leading to system calls
# repeat until become stable
for((iter=0;iter<2;iter++))
do
$PIN_ROOT/pin -t ../../pintools/tx_prof/obj-intel64/tx_prof.so -o ${1}.prof.out -- ./${1}.prof.exe
sleep 1 
done

# simulate tx and evaluate memory footprint per tx
$PIN_ROOT/pin -t ../../pintools/tx_prof/obj-intel64/tx_prof.so -o ${1}.prof.out -txsim 1 -- ./${1}.prof.exe
