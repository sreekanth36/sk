# 9. Write a shell script that receives any number of file names as arguments checks if every argument supplied is a file or a directory and reports accordingly. Whenever the argument is a file, the number of lines on it is also reported.


#!/bin/sh


for sk in $*
do
	if [ -f $sk ]
	then
		echo "$sk"
		echo "$(cat $sk | wc -l) lines"

	elif [ -d $sk ]
	then
		echo "$sk"
		echo "It is a directory"
	else
		echo "$sk"
		echo "No such file (or) directory"
	fi
done
