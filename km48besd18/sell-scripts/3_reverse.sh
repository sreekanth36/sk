# 3. Write script to print given number in reverse order, for eg. If no is 123 it must print as 321


#!/bin/sh

echo "enter a value"
read a
b=0
while [ $a -ne 0 ]
do
	b=$( expr $b \* 10 ) 
	b=$( expr $b + $a % 10 )
	a=$( expr $a / 10 )
done
	echo "output:"
	echo "$b"
