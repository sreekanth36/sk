#include"sk.h"
int main()
{
	int total,lop,m,y,netsalary;
	printf("enter total,lop,m,y values\n");
	scanf("%d%d%d%d",&total,&lop,&m,&y);
	if(total<0||(m<0 && m>12)||y<0||lop>31)
	{
		printf("enter valid input\n");
		return 0;
	}
	else
	{
		netsalary=calculatenetsalary(total,lop,m,y);
		printf("net salary:%d\n",netsalary);
		return 0;
	}
}

