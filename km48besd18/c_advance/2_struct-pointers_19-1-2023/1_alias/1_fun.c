#include"sk.h"
void sk(float *si,std s)
{
	int i,sum=0;
	for(i=0;i<6;i++)
	{
		sum=sum+s.marks[i];
	}
	*si=(sum/6.0);
	return ;
}
