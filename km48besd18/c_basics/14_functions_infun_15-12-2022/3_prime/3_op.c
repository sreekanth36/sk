#include"sk.h"
int prime(int a)
{
	int i;
	for(i=2;i<=(a/2);i++)
		if (a%i==0)
			return 0;
	return 1;
}
