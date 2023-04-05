extern int i,j;
extern char sk[10];
void skrev(void)
{
	int temp;
	for(i=0,j--;i<j;i++,j--)
	{
		temp = sk[j];
		sk[j] = sk[i];
		sk[i] = temp;
	}
		return ;
}
