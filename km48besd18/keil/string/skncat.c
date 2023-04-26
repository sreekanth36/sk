extern int i;
extern char sk[10];
void skncat(void)
{
	int n=4,x=i,j;
	char sk1[sizeof(sk)+sizeof(sk)]="sreekanth";
	for(j=0;j<n;x++,j++)
	{
		sk1[x] = sk[j];
	}	
	return ;
}
