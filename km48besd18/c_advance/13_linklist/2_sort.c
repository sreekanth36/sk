#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list
{
	int name;
	struct list * next;
}sk;

void skprint(sk * s);
sk * skcreate(void);
void sklist(sk **);
void skfree(sk * s);
void sksort(sk **h,sk **);

int main()
{
	sk *h=NULL;
	sklist(&h);
	skprint(h);
	skfree(h);
	return 0;
}

sk * skcreate()
{
	sk * c=NULL;
	c=(sk *)malloc(sizeof(sk));
	c->next=NULL;
	printf("enter a number\n");
	scanf("%d",&c->name);
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
			sksort(h,&c);
		skprint(*h);
		printf("enter to continue (y/n)\n");
		scanf(" %c",&s);
	}
}

void sksort(sk **h,sk **c)
{
	int b=1,j=1;
	sk *s=*h,*k=*h;
	for(;s;b++)
	{
		if(((*c)->name)<(s->name))
		{
			j=0;
			(*c)->next=s;
			if(b==1)
				(*h)=(*c);
			else
				k->next=((*c));
			break;
		}
		k=s;
		s=s->next;
	}
	if(j)
		k->next=(*c);
}

void skprint(sk * s)
{
	int i=0;
	printf(" ==>output<==\n");
	while(s)
	{
		printf(" %d   %d\n",++i,s->name);
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

