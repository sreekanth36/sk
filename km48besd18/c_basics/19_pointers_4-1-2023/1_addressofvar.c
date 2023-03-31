//1)Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected value (apply * operator).


#include<stdio.h>
int main()
{
	int x=10;
	int *s=&x;
	float y=15;
	float *b=&y;
	char z='A';
	char *c=&z;
	printf("address of x:%p value of x:%d size of x:%lu\naddress of s:%p indirected value of s:%d size of s:%lu\n",&x,x,sizeof(x),s,*s,sizeof(*s));
	printf("address of y:%p value of y:%f size of y:%lu\naddress of b:%p indirected value of b:%f size of b:%lu\n",&y,y,sizeof(y),b,*b,sizeof(*b));
	printf("address of z:%p value of z:%c size of z:%lu\naddress of c:%p indirected value of c:%d size of c:%lu\n",&z,z,sizeof(z),c,*c,sizeof(*c));
}
