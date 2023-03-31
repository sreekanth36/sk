#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	float p;
	printf("enter subject values\n");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	p=(a+b+c+d+e+f)/6;
	if (p>100)
		printf("invalid");
	else if(p>81)
		printf("your grade is ho:%f\n",p);
		else if(p>60)
		printf("your grade is f Division:%f\n",p);
	else if(p>50)
		printf("your grade is scDivision:%f\n",p);
	else if(p>40)
		printf("your grade is TD:%f\n",p);
	else 
		printf("your grade is fail:%f\n",p);

	return 0;
	}




