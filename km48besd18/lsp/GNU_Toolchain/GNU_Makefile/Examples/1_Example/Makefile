all:main
	echo "Build Done"
main:main.o add.o 
	gcc main.o add.o -o main
main.o:main.c
	gcc -c main.c
add.o:add.c
	gcc -c add.c
clean:
	rm *.o main
install:
	sudo cp main /bin
