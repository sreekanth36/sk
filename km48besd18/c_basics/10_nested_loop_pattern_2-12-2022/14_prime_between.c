/**14) Write a program to print all prime numbers between 2 given integers.
eg., input: 10 20
prime numbers between 10 & 20 are: 11 13 17 19 */


#include<stdio.h>
int main()
{
	int a,b,i=1,s=0;
	printf("enter 2 values\n");
	scanf("%d%d",&a,&b);
	while(a<=b)
	{
		i=2;
		s=0;
		while (i<a)
		{
			if (a%i==0)
				s++;

			i++;
		}

		if (s==0)
			printf(" %d",a);


		a++;
	}
	printf("\n");

/*( ;a<=b;a++)
	{
		for (i=2,s=0;i<a;i++)
		{
			if (a%i==0)
				s++;
		}
		if (s==0)
			printf("%d ",a);
	}
	printf("\n");
	return 0;*/
}
