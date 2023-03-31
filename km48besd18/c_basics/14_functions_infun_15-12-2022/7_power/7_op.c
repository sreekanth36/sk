#include"sk.h"
int power(int a,int b)
{
	int s=1,i;
	for(i=1;i<=b;i++)
		s*=a;
	return s;
}
