// 10) Print the first n Fibonacci numbers using a recursive function.

#include <stdio.h>

int sk(int a,unsigned int c)
{
	unsigned int s;
	static unsigned int b=1;
	if(!a)
		return 0;
	printf("%d ",b);
	s=b;
	b+=c;
	sk(a-1,s);
}

int main()
{
	int a;
	printf("enter a num\n");
	scanf("%d",&a);
	sk(a,0);
	printf("\n");
	return 0;
}

