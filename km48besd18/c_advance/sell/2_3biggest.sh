# 2. Write Script to find out biggest number from given three nos. Nos are supplied as command line arguments. Print error if sufficient arguments are not supplied.

#!/bin/sh

if [ $# -ne 3 ] 
then
	echo "enter only 3 values"
else
	if [ $1 -gt $2 ] && [ $1 -gt $3 ]
	then
		echo "$1 is big"
	elif [ $2 -gt $3 ]
	then
		echo "$2 is big"
	else
		echo "$3 is big"
	fi
fi
