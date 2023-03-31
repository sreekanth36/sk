# 11. Write a shell script to find factorial of a given integer.


#!/bin/sh

echo "enter a value"
read s
a=$s
while [ $a -ne 1 ]
do
	a=$(expr $a - 1)
	s=$(expr $a \* $s)
done
echo "$s"
