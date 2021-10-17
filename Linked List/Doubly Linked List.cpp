#include<stdio.h>
#include<stdlib.h>
struct dnode
{
	int data;
	struct dnode *next;
	struct dnode *prev;
}*start=NULL;
void create(int i)
{
	int x;
	struct dnode *t,*p=start;
	t=(struct dnode*)malloc(sizeof(struct dnode));
	printf("enter the data into the %d node \n",i);
	scanf("%d",&x);
	t->data=x;
	if(start==NULL)
	{
		start=t;
		t->prev=NULL;
		t->next=NULL;
	}
	else
	{
		while(p->next)
		{
			p=p->next;
		}
		p->next=t;
		t->next=NULL;
		t->prev=p;
	}
}
void display()
{
	struct dnode*p=start;
	while(p)
	{
	printf("%d \n ",p->data);
	p=p->next;
}
}
void addb()
{
	int x;
	printf("you are adding at beggining \n");
	printf("enter the valuve in the node \n");
	scanf("%d",&x);
	
	struct dnode *t=(struct dnode*)malloc(sizeof(struct dnode ));
	t->data=x;
	t->prev=NULL;
	t->next=start;
	start=t;
}
void delatpos()
{
	int pos,x;
	printf("{enter the position of the element you want to delete \n");
	scanf("%d",&pos);
	struct dnode *p=start,*t;
	for(x=1;x<pos;x++)
	{
		p=p->next;
	}
	t=p->next;
	p->next=t->next;
	t->next->prev=p;
	free(t);
}

int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		create(i);
	}
	printf("\n \n \n");
		display();
		addb();
		printf("\n \n \n");
		display();
		delatpos();
		printf("\n \n \n");
		display();
	return 0;
}
