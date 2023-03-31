//5)Declare 3 pointer variables of integer type, and an integer variable. Assign the address of integer variable to the 3 pointers. Print the variable value using indirection on each pointer variable. Change the variable value directly and check the values of each of the pointers using indirection. Change the variable value , using each pointer and print the variable value and indirected values of all pointers every time you change.


#include<stdio.h>
int main()
{
	int x=1;
	int *a=&x,*b=0,*c=0;
	b=c=a;
	printf("a:%d b:%d c:%d x:%d\n",*a,*b,*c,x);
	x=10;
	printf("a:%d b:%d c:%d x change:%d\n",*a,*b,*c,x);
	*a=20;
	printf("a change:%d b:%d c:%d x:%d\n",*a,*b,*c,x);
	*b=30;
	printf("a:%d b change:%d c:%d x:%d\n",*a,*b,*c,x);
	*c=40;
	printf("a:%d b:%d c change:%d x:%d\n",*a,*b,*c,x);
	return 0;
}
