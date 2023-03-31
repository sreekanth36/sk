#include<stdio.h>
int main()
{
int a,n,x=0,y=0,i=0;
printf("enter max count\n");
scanf("%d",&n);
while (i<n)
{
printf("enter a value\n");
scanf("%d",&a);
if (a>0)
x++;
if (a<0)
y++;
i++;
}
printf("Total postive count is:%d\nTotal negtive count is:%d\n",x,y);
return 0;
}
