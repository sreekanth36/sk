# 8. Write a shell script that displays a list of all the files in the current directory to which the user has read, write and execute permissions.


#!/bin/sh

for sk in *
do
	if [ -f $sk ]
	then
		if [ -r $sk ] && [ -w $sk ] && [ -x $sk ]
		then
			ls -l $sk
		fi
	fi
done
