#include"sk.h"
void swap(std s[],std s1)
{
	int i,j;
	for(i=0,j=4;i<j;i++,j--)
	{		
		s1=s[i];
		s[i]=s[j];
		s[j]=s1;
	}
}
