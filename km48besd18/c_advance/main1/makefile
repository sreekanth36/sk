ss=gcc
all:sk
	echo "enjoy"
sk:main.o add/add.o sub/sub.o mul/mul.o div/div.o
	${ss} main.o add/add.o sub/sub.o mul/mul.o div/div.o -o sk
main.o:main.c
	gcc -c main.c
add/add.o:add/add.c
	make -C add
sub/sub.o:sub/sub.c
	make -C sub
mul/mul.o:mul/mul.c
	make -C mul
div/div.o:div/div.c
	make -C div
clean:
	rm *.o sk add/*.o sub/*.o mul/*.o div/*.o
