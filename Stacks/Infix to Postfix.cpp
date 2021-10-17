#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int stack[100];
int top=-1;
void push(char x)
{
stack[++top] = x;
}
char pop()
{
return stack[top--];
}
int isop(char ch)
{
	if(ch=='^'||ch=='*'||ch=='/'||ch=='+'||ch=='-')
	return 1;
	else 
	return 0;
}
int pre(char ch)
{
	if(ch=='^')
	return 3;
	else if(ch=='*'||ch=='/')
	return 2;
	else if(ch=='+'||ch=='-')
	return 1;
	else
	return 0;
}
void ptoin(char i[])
{
	char x;
	char *e;
	e=i;
	if(isalnum(*e))
	printf("%c",*e);
	 else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(pre(stack[top]) >= pre(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    while(top != -1)
    {
        printf("%c ",pop());
    }
}
int main()
{
	char i[50];
	printf("enter your infix expression \n");
	gets(i);
	ptoin(i);
	return 0;
}
