extern char sk[10];
int skicmp(void)
{
	int i;
	char sk2[sizeof(sk)+sizeof(sk)]="SREEKANTH";
	for(i=0;sk[i]!='\0';i++)
	{
		if(!((sk[i]==sk2[i]+32)||(sk[i]+32==sk2[i])) && (sk[i]!=sk2[i]))
			return (sk[i]-sk2[i]);
	}
	return 0;
}
