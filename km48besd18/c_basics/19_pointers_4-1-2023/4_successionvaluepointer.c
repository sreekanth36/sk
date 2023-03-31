//4)Declare 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer in succession and print the value of the variable using indirection operator on the pointer.


#include<stdio.h>
int main()
{
	int x=1,y=2,z=3;
	int *s=&x;
	printf("x pointer:%d x:%d\n",*s,x);
	s=&y;
	printf("y pointer:%d y:%d\n",*s,y);
	s=&z;
	printf("z pointer:%d z:%d\n",*s,z);
	return 0;
}
