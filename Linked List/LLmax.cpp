#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node * next;
}*first,*last;
int main()
{
	int n,i,max;
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
	p=first;
	max=p->data;
	i=1;
	p=first->next;
	while(p->next->next!=NULL)
	{
		if((p->data)>max)
		{
			max=p->data;
		}
		p=p->next;
		
	}
	printf("the maximum element is %d",max);
	
	return 0;
}
