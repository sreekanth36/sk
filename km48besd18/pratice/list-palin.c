#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
	int id;
	struct list * next;
}sk;

sk * skcreate();
void sklist(sk **h);
void skprint(sk * s);
void skfree(sk * s);
int skpalin(sk *);
void skrev(sk *);
int main()
{
	sk *h=NULL;
	int s;
	sklist(&h);
	skrev(h);
	skprint(h);
/*	s=skpalin(h);
	if(s)
		printf("list is Palindrome\n");
	else
		printf("list is Not a Palindrome\n");
*/	skfree(h);
}

sk * skcreate()
{
	sk * c=NULL;
	c=(sk *)malloc(sizeof(sk));
	c->next=NULL;
	printf("enter a num\n");
	scanf("%d",&c->id);
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

void skrev(sk *h)
{
	sk *s=h,*k=h;
	int a,b,c=0;
	printf("enter a rev num\n");
	scanf("%d",&a);
	for(b=1;s;b++)
	{
//		printf("b=%d s=%d k=%d\n",b,s->id,k->id);
		if(a==b)
		{
			c=1;
		}
//		if(s)
//		printf("he\n");
		if(c)
		{
			if(s && (s->next==NULL))
				printf("k=%d\n",k->id);
			k=k->next;
//				printf("k1=%d\n",k->id);
		}
		s=s->next;
	}
	if(c==0)
		printf("out of range\n");
}

int skpalin(sk *h)
{
	sk *s=h,*k=h,*ss=h;
	for(;k->next;)
		k=k->next;
	for(;s<k;)
	{
		if((s->id)!=(k->id))
			return 0;
		s=s->next;
		ss=s;
		if(s<k)
			for(;ss->next!=k;)
				ss=ss->next;
		k=ss;
	}
	return 1;
}

void skprint(sk * s)
{
	int i=0;
	printf(" ==>output<==\n");
	while(s)
	{
		printf(" %d   %d\n",++i,s->id);
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

