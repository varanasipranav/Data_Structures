#include<stdio.h>
int main()
{
	int arr[5],n,i,item;
	printf("enter the values of array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element ypu whant to search");
	scanf("%d",&item);
	for(i=0;i<5;i++)
	{
		if(arr[i]==item)
		{
			printf("the element is at %d \n",i);
			
		}
	}
	return 0;
	
}
