#!/bin/bash
n=0
sum=0
while [[ $n -lt 10 ]];do
	n=$(($n+1))
	sum=$(($sum+$n))
done
echo $sum
