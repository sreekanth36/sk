//calculation of area and perimeter of rectangle,square and circle in three different programs.

#include<stdio.h>
int main()
{
	int a=1,b=2,c,d,a1=2,A,P,r=3;
	float a2,p2;
	c=a*b;
	d=2*(a+b);
	printf("area of rec is :%d\nperimeter of rec is:%d\n",c,d);
	A=a1*a1;
	P=4*a1;
	printf("area of square is:%d\nperimeter of square is:%d\n",A,P);
	a2=3.14*r*r;
	p2=2*3.14*r;
	printf("area of circle is:%f\nperimeter of circle is:%f\n",a2,p2);
	return 0;
}

