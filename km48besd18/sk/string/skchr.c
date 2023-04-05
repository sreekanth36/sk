extern char sk[10];
int skchr()
{
	int i;
	char n='k';
	for(i=0;sk[i]!='\0';i++)
	{
		if(n==sk[i])
			return i;
	}
	return -1;
}
