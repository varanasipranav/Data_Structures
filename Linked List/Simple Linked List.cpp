#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL;
void create(int i)
{
	int x;
	struct node *p,*t;
	p=start;
	t=(struct node*)malloc(sizeof(struct node));
	printf("enter the data into the %d node",i);
	scanf("%d",&x);
	t->data=x;
	if(start==NULL)
	{
		start=t;
		t->next=NULL;
	}
	else
	{
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=t;
	}
	t->next=NULL;
}
void display()
{
	struct node *p;
	p=start;
	int i=1;
	while(p)
	{
		printf("the data of the %d node is %d \n",i,p->data);
		p=p->next;
		i++;
	}
}
void remdup()
{
	struct node *c=start;
	struct node *n;
	
	
}
void sort()
{
	int temp;
	struct node *c,*i;
	c=start;
	while(c)
	{
		i=c->next;
		while(i)
		{
			if(i->data<c->data)
			{
				temp=i->data;
				i->data=c->data;
				c->data=temp;
			}
			i=i->next;
		}
		c=c->next;
	}
}
void reverse()
{
	struct node *current,*prev=NULL,*after;
	current=start;
	while(current)
	{
	after=current->next;
	current->next=prev;
	prev=current;
	current=after;
	}
	start=prev;
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
	printf("\n \n \n");
	reverse();
	display();
	printf("\n \n \n");
	sort();
	display();
return 0;	
}

