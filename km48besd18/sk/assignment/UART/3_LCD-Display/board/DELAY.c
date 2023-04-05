

void  DELAY(int x)
{
	int i;
	while(x)
	{
		for(i=0;i<4000;i++);
		x--;
	}
}