extern char sk[10];
int skcmp(void)
{
	char sk1[sizeof(sk)+sizeof(sk)]="sreekanth";
	int i;
	for(i=0;sk[i]!='\0';i++)
	{
		if(sk[i]!=sk1[i])
			return (sk[i]-sk1[i]);
	}
	return 0;
}
