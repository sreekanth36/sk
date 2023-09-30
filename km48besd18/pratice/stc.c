#include <stdio.h>

typedef union sk
{
	int a;
	char c[4];
}s;

int main()
{
	s b;
	b.a=0x12345678;
	printf("%x %x %x %x\n",b.c[0],b.c[1],b.c[2],b.c[3]);
	printf("%ld\n",sizeof(s));
	return 0;
}

