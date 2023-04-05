extern int i;
int j;
extern char sk[10];
void skcat(void)
{
	int x=i;
	char sk1[sizeof(sk)+sizeof(sk)]="sreekanth";
	for(j=0;sk[j]!='\0';x++,j++)
	{
		sk1[x] = sk[j];
	}	
	return ;
}
