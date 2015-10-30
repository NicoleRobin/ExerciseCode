#!/bin/bash
i=0
while [ $i -lt 50 ]
do
	`cp ./Import_ysb_201410240006_03_11.txt ./Import_ysb_201410240006_03_11.txt.${i}`
	echo $i
	i=`expr $i + 1`;
done
