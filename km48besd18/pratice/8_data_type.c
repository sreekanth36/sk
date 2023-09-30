//8)define a sizeof macro ,that will find the size of a given data type as parameter. use pointers.

#include<stdio.h>
int s;
void *x=0;
#define size(m) /**((m*)x)=*((m*)x)*/; printf("%lu\n",((char*)(((m*)&x)+1)-(char*)(((m*)&x))))
int main()
{
//	*((int*)&s)=*((int*)&s);
	printf("%lu\n",((char*)(((double*)&x)+1)-(char*)(&*((double*)&x))));
	size(int);
	size(long double);
	return 0;
}
