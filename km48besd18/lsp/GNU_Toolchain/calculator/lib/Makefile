all:libcalc.a libcalc.so


libcalc.a:
	gcc -c add.c
	gcc -c sub.c
	ar -rcs libcalc.a add.o sub.o

libcalc.so:
	gcc -c -fpic add.c
	gcc -c -fpic sub.c
	gcc -shared -o libcalc.so add.o sub.o


clean:
	rm *.o libcalc.a libcalc.so

