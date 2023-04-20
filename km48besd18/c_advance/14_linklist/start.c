#include <stdio.h>
#include <stdlib.h>


typedef struct list
{
	char name[15];
	struct list * next;
}sk;

void skprint(sk * s);
void skcreate();
void sklist();
void skinsert(sk * s);
void skfree(sk * s);

sk *h=NULL, *c=NULL, *l=NULL;

int main()
{
	sklist();
	skprint(h);
	skinsert(h);
	skprint(h);
	skfree(h);
	return 0;
}

void skcreate()
{
	c=(sk *)malloc(sizeof(sk));
	c->next=NULL;
	printf("enter a name\n");
	scanf("%s",c->name);
}

void skinsert(sk * s)
{
	int i=1,a;
	printf("enter where to link\n");
	scanf("%d",&a);
	if(a==0)
	{
		skcreate();
		c->next=s;
		h=c;
	}
	while(i<a /*&& s!=NULL*/)
	{
		printf("1=%s\n",s->name);
		l=s;
		s=s->next;
		i++;
		printf("1=%s\n",s->name);
		printf("1=%s\n",l->name);
	}
	if(a /*&& s!=NULL*/)
	{
		skcreate();
//		c->next=s;
		s->next=c;
		l->next=c;
		printf("1=%s\n",s->name);
	}
}

void sklist()
{
	int i;
	char s='y';
	while(s!='n')
	{
		skcreate();
		if(h==NULL)
			h=c;
		else
			l->next=c;
		l=c;
		printf("enter to continue (y/n)\n");
		scanf(" %c",&s);
	}
}

void skprint(sk * s)
{
	printf("output:\n");
	while(s)
	{
		l=s;
		printf("%s\n",s->name);
		s=s->next;
	}
}

void skfree(sk * s)
{
	while(s)
	{
		l=s;
		s=s->next;
		free(l);
	}
}

