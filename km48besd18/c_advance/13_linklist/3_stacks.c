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
void skpush(sk **t);
sk * skpop(sk *t);
void skpusharr(int s[5],int *t);
int skpoparr(int s[5],int t);

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
	sk *t=NULL;
	int a,top=0;
	int sk[5]={0};
	printf("   ---Using Array---\n");
	while(1)
	{
		printf("\nenter any one from below\n");
		printf("  1:push to list\n  2:pop from list\n  3:exit\n");
		scanf("%d",&a);
		if(a==1)
			skpusharr(sk,&top);
		else if(a==2)
			top=skpoparr(sk,top);
		else if(a==3)
			break;
	}
	printf("   ---Using Linklist---\n");
	while(1)
	{
		printf("\nenter any one from below\n");
		printf("  1:push to list\n  2:pop from list\n  3:exit\n");
		scanf("%d",&a);
		if(a==1)
			skpush(&t);
		else if(a==2)
			t=skpop(t);
		else if(a==3)
			break;
	}
}

void skpusharr(int s[5],int *t)
{
	if((*t)==5)
	{
		printf("Stack is Full\n");
	}
	else
	{
		printf("enter a number\n");
		scanf("%d",&s[*t]);
		(*t)++;
		printf(" ==>output<==\n");
			printf("  %d\n",s[(*t)-1]);
	}
}

int skpoparr(int s[5],int t)
{
	if(t==0)
	{
		printf("Stack is empty\n");
	}
	else
	{
		t--;
		printf(" ==>output<==\n");
		printf("  %d\n",s[t]);
	}
	return t;
}

void skpush(sk **t)
{
	sk *c=NULL;
	c=skcreate();
	if(c==NULL)
		printf("Heap is Full\n");
	c->next=*t;
	(*t)=c;
		printf(" ==>output<==\n");
	printf(" %s\n",(*t)->name);
}

sk * skpop(sk *t)
{
	if(t==NULL)
	{
		printf("The stack is empty\n");
		return t;
	}
	sk *c=NULL;
	c=t;
	printf(" ==>output<==\n");
	printf(" %s\n",t->name);
	t=t->next;
	free(c);
	return t;
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

