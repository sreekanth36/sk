//4) Read n numbers from user, and while reading every number, print if the number is bigger or smaller than the previous number. For first number, there wont be any output as it is the first one.

#include<stdio.h>
int main()
{
	int i=0,n,a,b;
	printf("enter max count value\n");
	scanf("%d",&n);
	while(i<n)
	{
		printf("enter a value\n");
		scanf("%d",&a);
		if(i==0)
			b=a;
		else if ((a>b)||(a<b))
			a>b?printf("%d is big than pervious\n",a):printf("%d is small than pervious\n",a);
		else
			printf("value is same as pervious\n");
		b=a;
		++i;
	}
	return 0;
}
