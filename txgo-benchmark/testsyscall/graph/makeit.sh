#!/bin/bash

rm *.dot
rm *.pdf

opt \
	-dot-callgraph \
	-dot-cfg \
	../tntx.tsan.bc

dots=`ls *.dot`

for dotfile in $dots;do
	outfile=`echo $dotfile |rev |cut -d'.' -f2-|rev`
	echo making $outfile
	outfile="${outfile}.pdf"
	dot -Tpdf $dotfile -o $outfile
done


