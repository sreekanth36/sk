/* 3) Create a two dementional integer array to store the marks of n students in a class (Each student takes different number of subjects) so the number rows and columns are dynamic here. Read the marks of every student and calculate average marks, and print who is the topper (with highest average marks).
release the dynamic memory properly after printing the results */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int sk2(int stu,int *mark)
{
	int i=0,*temp=0,a=0,b=0;
	for(;i<stu;i++)
	{
		if(mark[i]>b)
		{
			a=i;
			b=mark[i];
		}
	}
	return a;
}

int main()
{
	int r,i,c,x=0;
	float a=0;
	int **sk;
	printf("enter no.of students\n");
	scanf("%d",&r);
	sk=(int **)malloc(sizeof(int *)*r);
	int sk1[r];
	for(i=0;i<r;i++)
	{
		printf("enter no.of subjects\n");
		scanf("%d",&c);
		sk[i]=(int *)malloc(sizeof(int)*c);
		for(x=0,a=0;x<c;x++)
		{
			printf("enter marks\n");
			scanf("%d",&sk[i][x]);
			a+=*(*(sk+i)+x);
		}
		sk1[i]=(a/c);
	}
	i=sk2(r,sk1);
	printf("output:\n");
	printf("%d is topper and marks is %d\n",i+1,sk1[i]);
	for(i=0;i<r;i++)
		free(sk[i]);
	free(sk);
	return 0;
}
