include .config

ifdef CONFIG_STATIC_BUILD
	ss = -static
endif
sk:sk1
	gcc ${ss} src/main.o -o bin/main -L lib -lsk
sk1:
	make -C src
library:
	make -C lib
clean:
	make -C src clean
#	rm bin/main
	make -C lib clean
install:
	sudo cp bin/main /usr/bin
	sudo cp lib/libsk.a /usr/lib
	sudo cp lib/libsk.so /usr/lib
uninstall:
	sudo rm /usr/bin/main
	sudo rm /usr/lib/libsk.a
	sudo rm /usr/lib/libsk.so
