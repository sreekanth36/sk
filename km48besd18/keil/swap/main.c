void sk(int x,int y);
void sk1(int *x,int *y);
int main()
{
	int x=5,y=2;
	sk(x,y);
	sk1(&x,&y);
	return 0;
}

void sk(int x,int y)
{
	int a;
	a=x;
	x=y;
	y=a;
	return ;
}

void sk1(int *x,int *y)
{
	int a;
	a=*x;
	*x=*y;
	*y=a;
	return ;
}
