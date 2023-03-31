//5) Print prime numbers between 2 given numbers.


#include<stdio.h>
int main()
{
	int a,b,i=1,s=0;
	printf("enter 2 values\n");
	scanf("%d%d",&a,&b);
	for( ;a<=b;a++)
	{
		for (i=2,s=0;i<=(a/2);i++)
		{
			if (a%i==0)
				s++;
			if (s==1)
				break;
		}
		if (s==0)
			printf("%d ",a);
	}
	printf("\n");
	return 0;
}
