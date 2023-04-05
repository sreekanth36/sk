extern int i;
extern char sk[10];
void sklwr(void)
{
	for(i=0;sk[i]!='\0';i++)
	{
		if(sk[i]>='A' && sk[i] <='Z')
			sk[i]+=32;
	}
	return ;
}
