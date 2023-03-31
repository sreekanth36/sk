# 10. Write a shell script to list all of the directory files in a directory.


#!/bin/sh
for sk in *
do
	if [ -d $sk ]
	then
		echo "$sk"
	fi
done
