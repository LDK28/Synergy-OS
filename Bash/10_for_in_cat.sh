#!/bin/bash
IFS=$ā\nā


file=$1

for name in $(cat $file)
do 
	echo "Hello, $name!"
done
