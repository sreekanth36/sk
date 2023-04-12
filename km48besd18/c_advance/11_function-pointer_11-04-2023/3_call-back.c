/* 3)"Write the calculator program using a function that accepts a function pointer and the operand values as arguments and invokes it. In main function, simply invoke this function by sending appropriate function address, based on operator chosen.
eg.,
	in main
	case '+' :invokeptr(add , x,y);


	invokeptr(int (*fptr) (int,int) , int x, int y)
{
	printf(""%d\n"",fptr(x,y));
}" */

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

void sk(int a,int b,int (*sk_s)(int,int))
{
	printf("%d\n",sk_s(a,b));
}
int main()
{
	int a,b;
	char c;
	printf("enter two values\n");
	scanf("%d%c%d",&a,&c,&b);
	if(c=='+')
		sk(a,b,sk_add);
	else if(c=='-')
		sk(a,b,sk_sub);
	else if(c=='*')
		sk(a,b,sk_mul);
	else if(c=='/')
		sk(a,b,sk_div);
	else 
		sk(a,b,sk_mod);
}
