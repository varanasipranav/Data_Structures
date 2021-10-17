#include<stdio.h>
#include<stdlib.h>
#define size 10
struct queue
{
	int rear,front;
	int arr[size];
}*q;
void create()
{
	q->front=q->rear=-1;
	q=(struct queue*)malloc(sizeof(struct queue));
}
void enque()
{
	if(q->rear==size-1)
	printf("OVERFLOW \n");
	else
	{
	int x;
	printf("enter the element you want to enque \n ");
	scanf("%d",&x);
	q->rear++;
	q->arr[q->rear]=x;
}
}
int deque()
{
	return q->arr[q->front++];
}
int main()
{
	int i;
	create();
	for(i=0;i<6;i++)
	enque();
	printf("\n \n \n");
	for(i=0;i<6;i++)
	printf("The element dequeued at position %d is %d \n",q->front,deque());
	return 0;
}
