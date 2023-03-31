# 5. How to write script, that will print, Message ""Hello World"", in Bold and Blink effect, and in different Colors like red, brown etc using echo command."


#!/bin/bash

sk="\e[1;5;031m"

echo -e "${sk}Hello World"


