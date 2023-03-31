//8)define a sizeof macro ,that will find the size of a given data type as parameter. use pointers.

#include<stdio.h>
int s;
void *x=&s;
#define size(m) *((m*)x)=*((m*)x); printf("%lu\n",((char*)(&*((m*)x)+1)-(char*)(&*((m*)x))))
int main()
{

	size(int);
	size(long double);
	return 0;
}
