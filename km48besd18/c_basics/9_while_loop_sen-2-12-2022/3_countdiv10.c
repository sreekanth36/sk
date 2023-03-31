#include<stdio.h>
int main()
{
int x,m,i=0,b;
printf("enter a value\n");
scanf("%d%d",&x,&b);
if (x%10==0)
m=x;
else 
{
m=x%10;
m=10+(x-m);
}
while (m<=b)
{
//if (m%10==0)
i++;
m=m+10;
}
printf("The total count is:%d\n",i);
return 0;
}
