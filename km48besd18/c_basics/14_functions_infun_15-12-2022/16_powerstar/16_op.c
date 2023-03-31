#include"sk.h"
int power(int a,int b)
{
	int i,s=1;
	for(i=1;i<=b;i++)
	{
		s=mul(s,a);
	}
	return s;
}
int mul(int i,int b)
{
	int j,s=0;
	for (j=1;j<=b;j++)
		s+=i;
	return s;
}
