//9-loop in loop repeat 8Q for n students from a class, read 6 subject marks for every student, and calculate their percentage of marks, and print how many students got first class (>60%) , how many students got second class (>50%) and how many students are just passed (>40%) and how many failed.

#include<stdio.h>
int main()
{
	int i=0,n,b=0,w=0,x=0,s=0,y=0,z=0;
	float p;
	printf("enter no of student\n");
	scanf("%d",&n);
	while (i<n)
	{
		while (b<6)
		{
			int a;
			printf("enter subject values\n");
			scanf("%d",&a);
			s=s+a;
			b++;
		}
		p=s/6.0;
		if(p>=60)
			w++;
		else if(p>=50)
			x++;
		else if(p>=40)
			y++;
		else
			z++;
		i++;
		b=0;
		s=0;
	}
printf("%d students got first class\n%d students got second class\n%d students are just passed\n%d students are failed\n",w,x,y,z);
return 0;
}
