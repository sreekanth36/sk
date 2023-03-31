// 12. WAP print reverse of interger number? 

#include<stdio.h>

int main()
{
	int x,a,p=0;
	printf("enter a value\n");
	scanf("%d",&x);
	a=x;
	while(a)
	{
		a=a>>1;
		p++;
	}
	p--;
	while(p>a)
	{
		if((x & 0x1<<a))
		{
			if(x& 0x1<<p)
				x=x | 0x1<<a;
			else
				x=x & ~(0x1<<a);
			x=x | 0x1<<p;
		}
		else
		{
			if(x & 0x1<<p)
				x=x | 0x1<<a;
			else
				x=x & ~(0x1<<a);
			x=x & ~(0x1<<p);
		}
		a++;
		p--;
	}
	printf("reverse=%d\n",x);
}
