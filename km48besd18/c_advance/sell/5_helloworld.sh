# 5. How to write script, that will print, Message ""Hello World"", in Bold and Blink effect, and in different Colors like red, brown etc using echo command."


#!/bin/dash

red='\033[033m'
bred='\e[6;033m'
nc='\033[0m
'
echo -e "$sk $bred Hello World $nc"
skecho "hello"
skecho "tata"
echo $$
echo $TERM
echo $USER
echo $MANPATH
