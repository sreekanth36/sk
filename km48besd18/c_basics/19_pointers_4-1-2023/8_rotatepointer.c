//8)Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x. Do this using pointers that point to x,y and z.


#include<stdio.h>
int main()
{
	int x,y,z,s;
	int *a=&x,*b=&y,*c=&z;
	printf("enter 3 values\n");
	scanf("%d%d%d",a,b,c);
	s=*a;
	x=*b;
	y=*c;
	z=s;
	printf("x:%d y:%d z:%d\n",x,y,z);
	return 0;
}
