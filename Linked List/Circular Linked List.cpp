#include<stdio.h>
#include<stdlib.h>
struct cnode
{
	int data;
	struct cnode *next;
}*start=NULL;
void create(int i)
{
	int x;
	struct cnode *p,*t;
	p=start;
	t=(struct cnode*)malloc(sizeof(struct cnode));
	printf("enter the data into the %d node",i);
	scanf("%d",&x);
	t->data=x;
	if(start==NULL)
	{
		start=t;
		t->next=start;
	}
	else
	{
		while(p->next!=start)
		{
			p=p->next;
		}
		p->next=t;
	}
	t->next=start;
}
void display()
{
	struct cnode *p;
	p=start;
	int i=1;
	while(p->next!=start)
	{
		printf("the data of the %d node is %d \n",i,p->data);
		p=p->next;
		i++;
	}
	printf("the data of the %d node is %d \n",i,p->data);
}

int main()
{
	int n;
	int i;
	printf("enter the number of nodes you want to insert \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	create(i);
	display();
	
return 0;	
}

