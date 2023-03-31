all:sk.a sk.so
	echo "lib files created"
sk.a:
	gcc -c add.c sub.c mul.c div.c
	ar -rcs libsk.a add.o sub.o mul.o div.o
sk.so:
	gcc -c -fpic add.c sub.c mul.c div.c
	gcc -shared -o libsk.so add.o sub.o mul.o div.o 
clean:
	rm *.o
#	rm libsk.a libsk.so
