//8)Write a function to accept two dates as input arguments and return the difference in number of days.


#include<stdio.h>
int month(int,int,int,int,int,int);
int day(int,int,int,int,int,int,int);
int valid(int d1,int m1,int y1,int d2,int m2,int y2);
int main()
{
	int d,m,y,d1,m1,y1,d2,m2,y2,i;
	printf("enter date,month and year\n");
	scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);
	i=valid(d1,m1,y1,d2,m2,y2);
	if(i==0)
		printf("enter a valid date\n");	
	return 0;
}
int valid(int d1,int m1,int y1,int d2,int m2,int y2)
{
	int a,b,x,c,d,y,m,p,n;
	c=0;
	if((y2<y1)||y1==y2 && m2<m1||y1==y2 && m1==m2 && d2<d1)
		{
			a=d1;b=m1;x=y1;
			d1=d2;m1=m2;y1=y2;
			d2=a;m2=b;y2=x;
		}
	switch(m1)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:if (d1<=31 && d1>0)
			{
				c=1;
				n=31;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:if(d1<=30 && d1>0)
			{
				c=1;
				n=30;
			}
			break;
		case 2: if ((y1%100!=0 && y1%4==0)||(y1%400==0))
			{
				if (d1<=29 && d1>0)
				{
					c=1;
					n=29;
				}
			}
			else 
				if (d1<=28 && d1>0)
				{
					c=1;
					n=28;
				}
			break;
		default :
			c=0;
			break;
	}
	if(c==1)
	{
		c=0;
		if (m2<=12)
		{
			switch(m2)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:if (d2<=31 && d2>0)
					{
						c=1;
					}
					break;
				case 4:
				case 6:
				case 9:
				case 11:if(d2<=30 && d2>0)
					{
						c=1;
					}
					break;
				case 2: if ((y2%100!=0 && y2%4==0)||(y2%400==0))
					{
						if (d2<=29 && d2>0)
						{
							c=1;
						}
					}
					else 
						if (d2<=28 && d2>0)
						{
							c=1;
						}
					break;
			}
		}
	}
	if (c==1)
	{
		m=month(d1,d2,m1,m2,y1,y2);
		d=day(d1,d2,m1,m2,y1,y2,n);
		d=d+m;
		printf("%d days\n",d);
		return 1;
	}
	else
		return 0;
}
int month(int d1,int d2,int m1,int m2,int y1,int y2)
{
	int m=0,n=12;
	m1+=1;
	for (;y1<=y2;y1++)
	{
		if(y1==y2)
			n=m2-1;
		for (;m1<=n;m1++)
		{

			switch(m1)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:m+=31;
					break;
				case 4:
				case 6:
				case 9:
				case 11:m+=30;
					break;
				case 2: if ((y1%100!=0 && y1%4==0)||(y1%400==0))
					{
						m+=29;
						break;

					}
					else 
					{
						m+=28;
						break;
					}
			}
		}
		m1=1;
	}
	return m;
}
int day(int d1,int d2,int m1,int m2,int y1,int y2,int n)
{
	int d=0;
	if (d1==d2 && m1==m2 && y1==y2)
		d=0;
	else if (y1==y2 && m1==m2 && d1<d2)
		d=d2-d1;
	else
	{
		for( ;d1<n;d1++)
			d++;
		d+=d2;
	}
	return d;

}
