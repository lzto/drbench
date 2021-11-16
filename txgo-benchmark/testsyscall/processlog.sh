#!/bin/bash
#create and process log for thread count

rm test.log

/home/lzto/intel-pcm/src/pcm-tsx.x \
	0.01 \
	-csv=test.log \
	-e RTM_RETIRED.START \
	-e RTM_RETIRED.ABORTED \
	-e TX_MEM.ABORT_CONFLICT \
	-e TX_MEM.ABORT_CAPACITY_WRITE \
	-- ././tntx

echo "core,start,abrt,abrt_conf,abrt_cap" > tx_graph.csv

grep \* test.log >> tx_graph.csv






