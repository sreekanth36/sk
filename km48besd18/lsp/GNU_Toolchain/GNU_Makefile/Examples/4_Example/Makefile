all:bin/main

bin/main:main.o src/add/add.o src/sub/sub.o
	gcc main.o src/add/add.o src/sub/sub.o -o bin/main
main.o:main.c
	gcc -c main.c
src/add/add.o:
	make -C src/add
src/sub/sub.o:
	make -C src/sub
clean:
	rm *.o bin/main
	make -C add clean
	make -C sub clean
install:
	sudo cp bin/main /usr/bin
