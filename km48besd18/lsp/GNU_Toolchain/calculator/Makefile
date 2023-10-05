include .config

ifdef CONFIG_STATIC_BUILD
	STATIC_BUILD = -static
endif

all:bin/main
	echo "Build Done"

bin/main:src/main.o
	gcc ${STATIC_BUILD} src/main.o -L lib -lcalc  -o bin/main
src/main.o:
	make -C src
library:
	make -C lib
clean:
	make -C src clean
#	make -C lib clean
	rm bin/main
install:
	sudo cp bin/main /usr/bin
	sudo cp lib/libcal.a /usr/lib
	sudo cp lib/libcal.so /usr/lib
