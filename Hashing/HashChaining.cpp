#include<stdio.h>
#include<stdlib.h>
#define size 10
struct node
{
	int data;
	struct node *next;
	
}*chain[size];
int insert(int value)
{
	struct node *t;
	t=(int*)malloc(sizeof(struct node));
	t->data=value;
	t->next=NULL;
	key=value%10;
	if(chain[key]==NULL)
	{
		chain[key]=t;
		t->next=NULL;		
	}
	else
	{
		struct node *p;
		p=chain[key];
		while(p->next)
		{
			p=p->next;
		}
		p->next=t;
	}
}

