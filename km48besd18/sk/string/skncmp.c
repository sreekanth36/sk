extern char sk[10];
int skncmp(void)
{
	char sk1[sizeof(sk)+sizeof(sk)]="sreekanth";
	int i,n=4;
	for(i=0;i<n;i++)
	{
		if(sk[i]!=sk1[i])
			return (sk[i]-sk1[i]);
	}
	return 0;
}
