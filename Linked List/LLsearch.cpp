#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node * next;
}*first,*last;
int main()
{
	int n,i,item,flag=0;
	first=(struct node *)malloc(sizeof(struct node ));
	last=(struct node *)malloc(sizeof(struct node ));
	first->next=last;
	last->next=NULL;
	printf("enter the number of nodes");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node *t;
		t=(struct node*)malloc(sizeof(struct node));
		t->next=first->next;
		first->next=t;
	}
	struct node *p;
	p=first;
	i=1;
	while(p->next->next!=NULL)
	{
		printf("enter the data %d \n",i);
		scanf("%d",&(p->data));
		i++;
		p=p->next;
	}
	printf("enter the element you want to search");
	scanf("%d",&item);
	p=first;
	i=1;
	while(p->next->next!=NULL)
	{
		if((p->data)==item)
		{
			flag=1;
			break;
		}
		else
		{
			p=p->next;
			i++;
		}
	}
	if(flag==1)
	printf("the elenemt is present in node %d",i);
	else
	printf("element not found");
	
	return 0;
}
