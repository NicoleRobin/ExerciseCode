#!/bin/bash
i=0
while [ $i -lt 50 ]
do
	`date >> test.data`
	i=`expr $i + 1`
done
