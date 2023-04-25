#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
	char name[15];
	struct list * next;
}sk;

sk * skcreate();
void skprint(sk * s);
void skfree(sk * s);
sk * skenque(sk **t,sk *);
void skdeque(sk **t);
void skenquearr(int s[5],int t);
void skdequearr(int s[5],int );

sk * skcreate()
{
	sk * c=NULL;
	c=(sk *)malloc(sizeof(sk));
	c->next=NULL;
	printf("enter a name\n");
	scanf("%s[^\n]",c->name);
	getchar();
	return c;
}

int main()
{
	sk *t=NULL,*s=NULL;
	int a,e=0,d=0,ss=0;
	int sk[5]={0};
	printf("   ---Using Array---\n");
	while(1)
	{
		printf("\nenter any one from below\n");
		printf("  1:enque to list\n  2:deque from list\n  3:exit\n");
		scanf("%d",&a);
		if(a==1)
		{
			if((e==5 && d==0 && ss==0) || (e==d && ss==1))
			{
				printf("Stack is Full\n");

			}
			else if(e<5)
			{
			skenquearr(sk,e);
			e++;
			}
			if(e!=d && e==5)
			{
				e=0;
				ss=1;
			}
		}
		else if(a==2)
		{
			if(d==e && ss==0)
				printf("Stack is Empty\n");
			else if(d<5)
			{
			skdequearr(sk,d);
			d++;
			}
			if(d==5 && d!=e)
			{
				d=0;
				ss=0;
			}
		}
		else if(a==3)
			break;
	}
	printf("   ---Using Linklist---\n");
	while(1)
	{
		printf("\nenter any one from below\n");
		printf("  1:enque to list\n  2:deque from list\n  3:exit\n");
		scanf("%d",&a);
		if(a==1)
			s=skenque(&t,s);
		else if(a==2)
			skdeque(&t);
		else if(a==3)
			break;
	}
}

void skenquearr(int s[5],int e)
{
	printf("enter a num\n");
	scanf("%d",&s[e]);
	printf(" ==>output<==\n");
	for(int i=0;i<5;i++)
		printf("  %d\n",s[i]);
}

void skdequearr(int s[5],int d)
{
	printf(" ==>output<==\n");
	printf("  %d\n",s[d]);
}

sk * skenque(sk **t,sk *l)
{
	sk *c=NULL;
	c=skcreate();
	if(c==NULL)
		printf("Heap is Full\n");
	if(!(*t))
		(*t)=c;
	else
		l->next=c;
	l=c;
		printf(" ==>output<==\n");
	printf(" %s\n",(l)->name);
	return c;
}

void skdeque(sk **d)
{
	if((*d)==NULL)
	{
		printf("The stack is empty\n");
		return ;
	}
	sk *c=NULL;
	c=(*d);
	printf(" ==>output<==\n");
	printf(" %s\n",(*d)->name);
	(*d)=(*d)->next;
	free(c);
}

void skfree(sk * s)
{
	sk *l=NULL;
	while(s)
	{
		l=s;
		s=s->next;
		free(l);
	}
}

