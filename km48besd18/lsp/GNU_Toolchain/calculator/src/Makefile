include ../.config


ifdef CONFIG_ADD
	CC_FLAG += -DADD
endif

ifdef CONFIG_SUB
	CC_FLAG += -DSUB
endif

all:main.o

main.o:main.c
	gcc ${CC_FLAG} -c main.c
clean:
	rm main.o
