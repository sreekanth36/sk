extern char sk[10];
int skstr(void)
{
	int i,j,a;
	char sk2[sizeof(sk)+sizeof(sk)]="sreekanth";
	for(i=0;sk[i]!=0;i++)
	{
		if(sk[i]==sk2[0])
		{
			for(j=1,a=i+1; ;j++,a++)
			{
				if(sk2[j]==0)
					return i;
				if(sk[a]!=sk2[j])
					break;
			}
		}
	}
	return -1;
}
