
RUN_PBZIP2="./tntx.prof.exe"

ARCH=`arch`

# profile call instructions that calls library functions leading to system calls
# repeat until become stable
for ((iter=0;iter<1;iter++)) ; do
	echo $ARCH
	if [ "$ARCH" == "x86_64" ];then
		$PIN_ROOT/pin -t ../../pintools/tx_prof/obj-intel64/tx_prof.so -o tntx.prof.out -- ${RUN_PBZIP2}
	else
		$PIN_ROOT/pin -t ../../pintools/tx_prof/obj-ia32/tx_prof.so -o tntx.prof.out -- ${RUN_PBZIP2}
	fi
	sleep 1 
done

# simulate tx and evaluate memory footprint per tx
#$PIN_ROOT/pin -t ../../pintools/tx_prof/obj-intel64/tx_prof.so -o pbzip2.prof.out -txsim 1 -- ${RUN_PBZIP2}
