#include<stdio.h>
#include<stdlib.h>
#define size 10
struct stack
{
	int top;
	int arr[size];
}*st;
void create()
{
	st=(struct stack*)malloc(sizeof(struct stack));
	st->top=-1;
}
void push()
{
	if(st->top==size-1)
	printf("OVERFLOW \n");
	else
	{
	int x;
	printf("Enter the element you want to push \n ");
	scanf("%d",&x);
	st->top++;
	st->arr[st->top]=x;
	printf("the element is pushed into %d position is %d \n",st->top,st->arr[st->top]);
}
}
int pop()
{
	if (st->top==-1)
	printf("Underflow \n");
	else
	{ 
	return st->arr[st->top--];
	}
}
int main()
{
	int i;
	create();
	for(i=0;i<5;i++)
	{
	push();
	printf("\n \n");
}
	printf("\n \n \n");
	for(i=0;i<6;i++)
	printf("the popped element is %d \n ",pop());
	return 0;
}
