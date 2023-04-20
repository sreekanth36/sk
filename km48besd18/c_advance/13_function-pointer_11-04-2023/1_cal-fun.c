// 1)Write the calculator program using function pointers for add, sub, mul, div and mod functions, using a single function pointer.
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
	fp *sk=0;
	sk=sk_add;
	printf("add=%d\n",sk(3,3));
	sk=&sk_sub;
	printf("sub=%d\n",sk(3,3));
	sk=sk_mul;
	printf("mul=%d\n",(*sk)(3,3));
	sk=sk_div;
	printf("div=%d\n",sk(3,3));
	sk=sk_mod;
	printf("mod=%d\n",sk(3,3));
}

