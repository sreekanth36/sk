ss=gcc
all:sk
	echo "enjoy"
sk:main.o add.o sk1 mul.o div.o
	${ss} main.o add.o sub.o mul.o div.o -o sk
main.o:main.c
	${ss} -c main.c
add.o:add.c
	${ss} -c add.c
sk1:
	gcc -c sub.c
mul.o:mul.c
	gcc -c mul.c
div.o:div.c
	gcc -c div.c
clean:
	rm *.o sk
