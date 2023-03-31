//10) write the calculator program to read two numbers and one character (+, -, *, / , %) from the user, and based on character, do appropriate operation on numbers and print the output. Modify the program to repeat this task n number of times.

#include<stdio.h>
int main()
{
	int i=0,n,a,b;
	char c;
	printf("enter max count\n");
	scanf("%d",&n);
	while(i<n)
	{
		printf("enter char values\n");
		scanf("%d%c%d",&a,&c,&b);
		if (c=='+')
			printf("%d\n",a+b);
		else if (c=='-')
			printf("%d\n",a-b);
		else if(c=='*')
			printf("%d\n",a*b);
		else if(c=='/')
			printf("%d\n",a/b);
		else if(c=='%')
			printf("%d\n",a%b);
		++i;
	}
	return 0;
}
