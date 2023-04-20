#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list
{
	char name[15];
	struct list * next;
}sk;

void skprint(sk * s);
sk * skcreate(void);
void sklist(sk **);
sk * skinsertat(sk *);
sk * skinsertbefore(sk *);
void skinsertafter(sk *);
void skfree(sk * s);
void skmenu(sk **);
void skdelete(sk **);


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
			l->next=c;
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
	printf("  1:Insert node at a positon\n  2:Insert a key before a position\n  3:Insert a key after a position\n  4:Delete node at a position\n  5:print the output\n  6:exit\n");
	scanf("%d",&i);
	getchar();
	if(i==1)
		*h=skinsertat(*h);
	else if(i==2)
		*h=skinsertbefore(*h);
	else if(i==3)
		skinsertafter(*h);
	else if(i==4)
		skdelete(h);
	else if(i==5)
		skprint(*h);
	else if(i==6)
		break;
	}
}

void skdelete(sk ** s)
{
	int i=1,a,f=1;
	sk *k=NULL,*h=(*s);
	printf("enter position num to delete\n");
	scanf("%d",&a);
	getchar();
	if(a==1 && (*s)!=NULL)
	{
		f=0;
		k=*s;
		(*s)=(*s)->next;
		free(k);
	}
	else
	{
		while(i<a-1 && (h)!=NULL)
		{
			h=(h)->next;
			i++;
		}
		if(a && (h)!=NULL && h->next!=NULL)
		{
			f=0;
			k=(h)->next;
			(h)->next=k->next;
			free(k);
		}
	}
	if(f)
		printf("entered position is out of node range\n");
}

sk * skinsertat(sk * s)
{
	int i=1,a,f=1;
	sk *c=NULL,*h=s;
	printf("enter position num to link\n");
	scanf("%d",&a);
	getchar();
	if(a==1)
	{
		f=0;
		c=skcreate();
		c->next=s;
		h=c;
	}
	else
	{
		while(i<a-1 && s!=NULL)
		{
			s=s->next;
			i++;
		}
		if(a && s!=NULL)
		{
			f=0;
			c=skcreate();
			c->next=s->next;
			s->next=c;
		}
	}
	if(f)
		printf("entered position is out of node range\n");
	return h;
}

sk * skinsertbefore(sk * s)
{
	int i=1,f=1;
	char a[15]={0};
	sk *c=NULL,*h=s;
	printf("enter position num to link\n");
	scanf("%s[^\n]",a);
	getchar();
	if( s!=NULL && strcmp(s->name,a)==0)
	{
		f=0;
		c=skcreate();
		c->next=s;
		h=c;
	}
	else
	{
		while( s!=NULL && s->next!=NULL && (i=strcmp(s->next->name,a)!=0))
		{
			s=s->next;
			i++;
		}
		if((i==0) && s!=NULL)
		{
			f=0;
			c=skcreate();
			c->next=s->next;
			s->next=c;
		}
	}
	if(f)
		printf("entered position is out of node range\n");
	return h;
}
void skinsertafter(sk * s)
{
	sk *c=NULL;
	int i=1,f=1;
	char a[15]={0};
	printf("enter name a to link\n");
	scanf("%s[^\n]",a);
	getchar();
	while(s!=NULL && (i=strcmp(s->name,a)!=0) && s->next!=NULL)
	{
		s=s->next;
	}
	if((i==0) && s!=NULL)
	{
		f=0;
		c=skcreate();
		c->next=s->next;
		s->next=c;
	}
	if(f)
		printf("entered position is out of node range\n");
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

