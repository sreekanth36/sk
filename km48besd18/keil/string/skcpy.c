extern int j;
int i;
extern char sk[10];
void skcpy(void)
{
	static int a=1;
	int b;
	static char sk1[sizeof(sk)+sizeof(sk)]="\0";
	if(a)
	{
		for(i=0;sk[i]!='\0';i++)
		sk1[i] = sk[i];
	a--;
	}
	else
	{
		for(b=0;sk1[b]!='\0';b++)
		sk[b] = sk1[b];
	}
	return ;
}
