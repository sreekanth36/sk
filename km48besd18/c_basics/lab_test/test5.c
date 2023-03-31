#include<stdio.h>
int main()
{
	int d,m,y,d1,m1,y1,i=1,c=0,n;
	printf("enter max student count\n");
	scanf("%d",&n);
	while (i<=n)
	{
sk:
		printf("enter date,month and year\n");
		scanf("%d%d%d",&d,&m,&y);
	/*		c=0;
			if (m>12||m<0)
			c=1;
			else if (m==2)
			{
				if ((y%100!=0 && y%4==0)||(y%400==0))
				{
					if(d>29||d<0)
						c=1;
						}
					else
						if (d>28||d<0)
						c=1;
			}
			else if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
			{
				if (d>31||d<0)
					c=1;
			}
			else if (m==4||m==6||m==9||m==11)
				if (d>30||d<0)
				c=1;*/
		c=0;
		if (m<12)
		{
			switch(m)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:if (d<=31 && d>0)
					c=1;
				break;
				case 4:
				case 6:
				case 9:
				case 11:if(d<=30 && d>0)
					c=1;
				break;
				case 2: if ((y%100!=0 && y%4==0)||(y%400==0))
					{
					if (d<=29 && d>0)
						c=1;
					}
					else 
						if (d<=28 && d>0)
							c=1;
					break;
			}
		}

			if (c==0)
			{
				printf("enter a valid date\n");
				goto sk;
			}
			if (i==1)
		{
			d1=d;
			m1=m;
			y1=y;
		}
			else if (i>1)
			if ((y<y1)||(y==y1 && m<m1)||(y==y1 && m==m1 && d<d1))
			{
				d1=d;
				m1=m;
				y1=y;
			}
			i++;
		}
	printf("the eldest of all is %d %d %d\n",d1,m1,y1);
		return 0;
}

		

