// 7. WAP to implement the sizeof operation using bitwise operator.  

#include<stdio.h>

void sizesk(int a);
void sizesk1(char a);
void sizesk2(double a);
void sizesk3(long double a);
int main()
{
	int x=3;
	char a=0;
	double b=3;
	long double y=3;
	sizesk(x);
	sizesk1(a);
//	sizesk2(b);
//	sizesk3(y);
}
void sizesk(int a)
{
	int x=0;
	while(a)
	{
		a=a<<1;
		x++;
	}
	printf("int size=%d\n",x/8);
}
void sizesk1(char a)
{
	int x=0;
	a=a|0x1;
	while(a)
	{
		a=a<<1;
		x++;
	}
	printf("char size=%d\n",x/8);
}
/*void sizesk2(double a)
{
	int x=0;
	while(a)
	{
		a=a << 1;
		x++;
	}
	printf("double size=%d\n",x/8);
}
void sizesk3(long double a)
{
	int x=0;
	while(a)
	{
		a=a<<0x01;
		x++;
	}
	printf("longdouble size=%d\n",x/8);
}*/
