# 1.Write shell script that will add two nos, which are supplied as command line argument, and if this two nos are not given show error and its usage

#!/bin/sh
if [ $# -gt 2 ] || [ $# -lt 2 ]
then
	echo "enter only two values"
else
	echo "output:"
	echo -n "$1+$2 = "; expr $1 + $2
fi
