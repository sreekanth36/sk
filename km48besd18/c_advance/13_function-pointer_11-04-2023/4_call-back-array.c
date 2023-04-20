/* 4) Write the calculator program using a function that accepts an array of function pointers and the operand values and operator character as arguments and invokes appropriate function based on the character. In main function, simply invoke this function by sending the array and operator character and operands as input.
eg.,
	in main
	case '+' :invokeptr( fparr, x,y, ch);
	
	
	invokeptr(int (*fptr[]) (int,int) , int x, int y ,char ch)
{ //based on ch value, choose which index to apply on fptr and invoke the function }*/

#include<stdio.h>

void sk_add(int a,int b)
{
	printf("add=%d\n",a+b);
}

void sk_sub(int a,int b)
{
	printf("sub=%d\n",a-b);
}
void sk_mul(int a,int b)
{
	printf("mul=%d\n",a*b);
}
void sk_div(int a,int b)
{
	printf("div=%d\n",a/b);
}
void sk_mod(int a,int b)
{
	printf("mod=%d\n",a%b);
}

void sk(int a,int b,char c,void (*sk_s[5])(int,int))
{
	if(c=='+')
		sk_s[0](a,b);
	else if(c=='-')
		sk_s[1](a,b);
	else if(c=='*')
		sk_s[2](a,b);
	else if(c=='/')
		sk_s[3](a,b);
	else 
		sk_s[4](a,b);
}
int main()
{
	int a,b;
	char c;
	typedef void (fp)(int,int);
	fp *sk_v[5]={sk_add,sk_sub,sk_mul,sk_div,sk_mod};
	printf("enter two values\n");
	scanf("%d%c%d",&a,&c,&b);
	sk(a,b,c,sk_v);
}
