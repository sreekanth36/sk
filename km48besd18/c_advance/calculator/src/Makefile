include ../.config

ifdef CONFIG_ADD
	ss += -DADD
endif
ifdef CONFIG_SUB
	ss += -DSUB
endif
ifdef CONFIG_MUL
	ss += -DMUL
endif
ifdef CONFIG_DIV
	ss += -DDIV
endif
main.o:
	gcc ${ss} -c main.c
clean:
	rm *.o 

