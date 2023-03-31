#include"sk.h"
void prime (int a,int b)
{
	for (;a<=b;a++)
	{
	      if(isprime(a))
		printf("%d\n",a);
	}
	return ;
}
int isprime(int a)
{
	int i;
	for(i=2;i<=(a/2);i++)
		if (a%i==0)
			return 0;
	return 1;
}

