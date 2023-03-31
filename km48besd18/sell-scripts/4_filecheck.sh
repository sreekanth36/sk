# 4. Write script to determine whether given file exist or not, file name is supplied as command line argument, Also check for sufficient number of command line arguments.


#!/bin/sh

if [ $# -ne 1 ]
then
	echo "enter only 1 file name"
else
	if [ -f $1 ]
	then
		echo "file exists"
	else
		echo "file not exists"
	fi
fi
