
CC=gcc
#CC=arm-linux-gnueabihf-gcc
CC_FLAG=-Wall
#DEBUG_FLAG=-g

all:main
main:main.o add.o sub.o
	$(CC)  main.o add.o sub.o -o main
main.o:main.c
	$(CC) $(CC_FLAG) $(DEBUG_FLAG) -c main.c
add.o:add.c
	$(CC) $(CC_FLAG) $(DEBUG_FLAG) -c add.c
sub.o:sub.c
	$(CC) $(CC_FLAG) $(DEBUG_FLAG) -c sub.c
clean:
	rm *.o main
install:
	sudo cp main /usr/bin
