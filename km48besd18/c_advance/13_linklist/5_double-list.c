#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list
{
	char name[15];
	struct list * next;
	struct list * p;
}sk;

void skprint(sk * s);
sk * skcreate(void);
void sklist(sk **);
sk * skinsertat(sk *);
sk * skinsert(sk * s,int k);
void skfree(sk * s);
void skmenu(sk **);
void skdelete(sk **);
void skreverse(sk **);

int main()
{
	sk *h=NULL;
	sklist(&h);
	skmenu(&h);
	skfree(h);
	return 0;
}

sk * skcreate()
{
	sk * c=NULL;
	c=(sk *)malloc(sizeof(sk));
	c->next=NULL;
	c->p=NULL;
	printf("enter a name\n");
	scanf("%s[^\n]",c->name);
	getchar();
	return c;
}

void sklist(sk **h)
{
	int i=0;
	sk *c=NULL,*l=NULL;
	char s='y';
	while(s!='n')
	{
		c=skcreate();
		if(*h==NULL)
			*h=c;
		else
		{
			l->next=c;
			c->p=l;
		}
		l=c;
		printf("enter to continue (y/n)\n");
		scanf(" %c",&s);
	}
}

void skmenu(sk **h)
{
	int i=0;
	while(1)
	{
	printf("\npick any one option from bellow\n");
	printf("  1:Insert node at a positon\n  2:Insert a key before a position\n  3:Insert a key after a position\n  4:Delete node at a position\n  5:Reverse the nodes\n  6:print the output\n  7:exit\n");
	scanf("%d",&i);
	getchar();
	if(i==1)
		*h=skinsertat(*h);
	else if(i==2)
		*h=skinsert(*h,i);
	else if(i==3)
		*h=skinsert(*h,i);
	else if(i==4)
		skdelete(h);
	else if(i==5)
		skreverse(h);
	else if(i==6)
		skprint(*h);
	else if(i==7)
		break;
	}
}

void skdelete(sk ** s)
{
	int i=1,a,f=1;
	sk *h=(*s);
	printf("enter position num to delete\n");
	scanf("%d",&a);
	getchar();
	if(a==1 && (*s)!=NULL)
	{
		f=0;
		h=*s;
		(*s)=(*s)->next;
		if((*s))
		(*s)->p=NULL;
		free(h);
	}
	else
	{
		for(;i<a && h!=NULL;i++)
			h=h->next;
		if(a && (h)!=NULL && h->next!=NULL)
		{
			f=0;
			h->p->next=(h)->next;
			h->next->p=h->p;
			free(h);
		}
		if(a && (h)!=NULL && h->next==NULL)
		{
			f=0;
			h->p->next=NULL;
			free(h);
		}
	}
	if(f)
		printf("entered position is out of node range\n");
}

sk * skinsertat(sk * s)
{
	int a,f=1,b;
	sk *c=NULL,*h=s;
	printf("enter position num to link\n");
	scanf("%d",&a);
	getchar();
	for(b=1;b<a-1 && s!=NULL ;b++)
		s=s->next;
	if(a==1)
	{
		f=0;
		c=skcreate();
		c->next=s;
		s->p=c;
		h=c;
	}
	else if(a && s!=NULL)
	{
		f=0;
		c=skcreate();
		c->next=s->next;
		if(c->next)
		c->next->p=c;
		s->next=c;
		c->p=s;
	}
	if(f)
		printf("entered position is out of node range\n");
	return h;
}

sk * skinsert(sk * s,int k)
{
	int i=1,f=1;
	char a[15]={0};
	sk *c=NULL,*h=s;
	printf("enter key to link\n");
	scanf("%s[^\n]",a);
	getchar();
	if(k==2 && s!=NULL && strcmp(s->name,a)==0)
	{
		f=0;
		c=skcreate();
		c->next=s;
		s->p=c;
		h=c;
	}
	if(k==3) //after key
		while(s!=NULL && (i=strcmp(s->name,a)!=0) && s->next!=NULL)
			s=s->next;
	else	// before key
		while(s!=NULL && s->next!=NULL && (i=strcmp(s->next->name,a)!=0))
			s=s->next;
	if((i==0) && s!=NULL)
	{
		f=0;
		c=skcreate();
		c->next=s->next;
		if(c->next)
		c->next->p=c;
		s->next=c;
		c->p=s;
	}
	if(f)
		printf("entered position is out of node range\n");
	return h;
}

void skreverse(sk **h)
{
	if((*h)==NULL)
	{
		printf("There are Zero nodes\n");
		return ;
	}
	sk *s=*h,*k=*h,*l=NULL;
	while(k)
	{
		k=s->next;
		s->next=s->p;
		s->p=k;
		if(k)
		s=k;
	}
	(*h)=s;
}

void skprint(sk * s)
{
	int i=0;
	printf(" ==>output<==\n");
	while(s)
	{
		printf(" %d   %s\n",++i,s->name);
		s=s->next;
	}
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

