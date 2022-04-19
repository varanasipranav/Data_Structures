#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
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
int main()
{
	int n1,n2,n3,num;
	char exp[50],*e;
	printf("Enter the expression \n");
	scanf("%s",&exp);
	e=exp;
	while(*e!='\0')
	{
		if(isdigit(*e))
		{
			num=*e-48;
			push(num);
		}
	else
	{
		n1=pop();
		n2=pop();
		switch(*e)
		{
			case '+':
			{
					n3=n1+n2;
				break;
			}
			case '-':
			{
				n3=n1-n2;
				break;
			}
			case '*':
			{
				
				n3=n1*n2;
				break;
		}
			case '/':
			{
				n3=n1/n2;
				break;
			}
			default :
				{
				printf("WRONG ONE");
			}
		}
			push(n3);
		}
	e++;
	}
	printf("the Result of the expression is %d",pop());
	return 0;
}
		
