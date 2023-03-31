#include"sk.h"
float pro(float i)
{
	int p=1;
	while(i>0)
	{
		p=(-p)*i;
		i--;
	}
	p=-p;
	return p;
}

