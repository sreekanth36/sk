void skatoi(void)
{
	char sk[]="12345";
	int i,x,s=0;
	for(i=0;sk[i]!=0;i++)
	{
		s*=10;
		x=sk[i]-48;
		s=x+s;
	}
	return ;
}
