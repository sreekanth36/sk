/* 7) Implement your own realloc function using malloc and free using below steps: 
- Allocate memory for new size using malloc
- copy data from old address to new address
- release the old address
- return the new address */

#include"sk.h"
int main()
{
	char x[50];
	char *s=(char *) malloc(sizeof(char)*50);
	s=&x[0];
	x[0]=123;
	printf("%ld\n",sizeof(x));
}
