extern int i;
extern char sk[10];
void skupr(void)
{
	for(i=0;sk[i]!='\0';i++)
	{
		if(sk[i]>='a' && sk[i] <='z')
			sk[i]-=32;
	}
	return ;
}
