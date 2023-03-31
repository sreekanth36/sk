# 7. Write a shell script that deletes all lines containing a specified word in one or more files supplied as arguments to it.


#!/bin/sh

sed -e "/$2/d" $1
