//8) for n students from a class, read 6 subject marks for every student, and calculate their percentage of marks, and print who is the topper of all (print the student number).

#include<stdio.h>
int main()
{
	int i=1,n,a,b,c,d,e,f,y;
	float p,x;
	printf("enter max count\n");
	scanf("%d",&n);
	while (i<=n)
	{
		printf("enter subject marks\n");
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		p=(a+b+c+d+e+f)/6;
			if(i==1)
			{
			x=p;y=i;
			}
		else if (p>x)
		{
			x=p;
			y=i;
		}
		//else 
		//	x=p;
		++i;
	}
	printf("%.2f is topper and student is %d\n",x,y);
	return 0;
}
