all:sk sk1
sk:
	gcc -c purchase.c sales.c stock.c
	ar -rcs libsk.a purchase.o sales.o stock.o
sk1:
	gcc -c -fpic purchase.c sales.c stock.c
	gcc -shared -o libsk.so purchase.o sales.o stock.o
clean:
	rm *.o
