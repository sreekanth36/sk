# 9. Write a shell script that receives any number of file names as arguments checks if every argument supplied is a file or a directory and reports accordingly. Whenever the argument is a file, the number of lines on it is also reported.


#!/bin/sh

sk=$#
for sk in $*
do
	if [ -e $sk ]
	then
		echo "$sk"
		if [ -f $sk ]
		then
			cat $sk | wc -l
		else
			echo "It is a directory"
		fi
	else
		echo "$sk"
		echo "No such file (or) directory"
	fi
done
