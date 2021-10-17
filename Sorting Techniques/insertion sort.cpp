#include<stdio.h>
#include<stdlib.h>
void insertion(int arr[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	for(i=0;i<n;i++)
	{
	printf("%d \n",arr[i]);
	}
}
int main()
{
	int arr[100];
	int i,n=0;
	printf("enter the number of elements you want \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter the %d element in the array \n ",i);
	scanf("%d",&arr[i]);
}
insertion(arr,n);
return 0;
}

