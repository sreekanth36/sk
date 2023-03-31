/*12.without using nested loops :
*
* * *
* * * *
* * * * *
* * * * * *   */


#include<stdio.h>
int main()
{
	int i=0,n,j=1;
	printf("enter max count\n");
	scanf("%d",&n);
	if (n<=0)
		i++;
	while(j>i)
	{
		printf("* ");
		i++;
		if (i==n)
			i++;
		else if(i==j)
		{
			i=0;
			j++;
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}
