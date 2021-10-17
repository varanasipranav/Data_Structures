#include<stdio.h>
#include<stdlib.h>
int stack[100];
int top=-1;
void push(int x)
{
stack[++top] = x;
}
int pop()
{
return stack[top--];
}
void dectob(int n)
{
	while(n!=0)
	{
		push(n%2);
		n=n/2;
	}
	printf("The decimal to Bnary conversion is :");
	while(top!=-1)
	{
		printf("%d",pop());
	}
}
int main()
{
	int n;
	printf("enter the number you want to conevert \n");
	scanf("%d",&n);
	dectob(n);
	return 0;
}
