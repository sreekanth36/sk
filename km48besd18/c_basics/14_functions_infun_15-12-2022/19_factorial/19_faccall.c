#include"sk.h"
float fac(int n)
{
	int i;
	float s=0;
	for(i=1;i<=n;i++)
	{
		if (i==1)
			s=i;
		else
			s+=((float)1.0/(pro(i)));
	}
	return s;
}

