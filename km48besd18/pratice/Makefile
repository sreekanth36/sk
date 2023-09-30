obj-m := hello.o

all:
	make -C lib/module/`uname -r`/build M =`pwd` module
clean:
	make -C lib/module/`uname -r`/build M =`pwd` module clean
