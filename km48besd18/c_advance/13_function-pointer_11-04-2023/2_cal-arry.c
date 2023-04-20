// 2)Rewrite the calculator program using array of function pointers.

#include<stdio.h>

int sk_add(int a,int b)
{
	return a+b;
}

int sk_sub(int a,int b)
{
	return a-b;
}
int sk_mul(int a,int b)
{
	return a*b;
}
int sk_div(int a,int b)
{
	return a/b;
}
int sk_mod(int a,int b)
{
	return a%b;
}

int main()
{
	typedef int (fp)(int,int);
	fp *sk[5]={sk_add,sk_sub,sk_mul,sk_div,sk_mod};
	printf("add=%d\n",sk[0](3,3));
	printf("sub=%d\n",sk[1](3,3));
	printf("mul=%d\n",(*sk[2])(3,3));
	printf("div=%d\n",sk[3](3,3));
	printf("mod=%d\n",sk[4](3,3));
}

