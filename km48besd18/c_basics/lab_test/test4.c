#include<stdio.h>
int main()
{
	int d,m,y,leap;
	printf("enter a year value\n");
	scanf("%d%d%d",&d,&m,&y);
		if (y%100!=0&&y%4==0||y%400==0)
		leap=1;
		switch(y>=1900&&y<=2200)
	{
		case 1:
			if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
				if (d>=1&&d<=31)
					printf("Valid Date\n");
				else
					printf("Invalid Date\n");
			else if(m==4||m==6||m==9||m==11)
				if (d>=1&&d<=30)
					printf("Valid Date\n");
				else 
					printf("Invalid Date\n");
			else if(m==2)
				if ((leap==1)&&(d>=1&&d<=29)||d>=1&&d<=28)
					printf("Valid Date\n");
				else
					printf("Invalid Date\n");
			else
				printf("Invalid Date\n");
			break;
		case 0:
			printf("Invalid Date\n");
	}
	return 0;
}
