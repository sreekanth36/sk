// 11) Print a single linked list from head to tail using recursive function

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list
{
	char name[15];
	struct list * next;
}sk;

sk * skcreate(void);
void sklist(sk **);
void skfree(sk * s);

void skrec(sk *a)
{
	if(!a)
		return ;
	printf("%s\n",a->name);
	skrec(a->next);
}

int main()
{
	sk *h=NULL;
	sklist(&h);
	printf("==> output <==\n");
	skrec(h);
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

