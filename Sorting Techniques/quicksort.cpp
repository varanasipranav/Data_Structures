#include<stdio.h>
#include<stdlib.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int partition(int arr[],int l,int h)
{
	int i,j;
	int pivot=arr[l];
	i=l;
	j=h;
	do
	{
		do
		{i++;}while(arr[i]<=pivot);
		do
		{j--;}while(arr[j]>pivot);
		if(i<j)
		{
			swap(&arr[i],&arr[j]);
		}
	}while(i<j);
	swap(&arr[j],&arr[l]);
	return j;
}
void quick(int arr[],int l,int h)
{
	int j;
	if(l<h)
	{
		j=partition(arr,l,h);
		quick(arr,l,j);
		quick(arr,j+1,h);
	}
}
int main()
{
	int i,l=0,h=5;
	int arr[6]={45,6,7,3,1,INT_MAX};
	quick(arr,l,h);
	for(i=0;i<5;i++)
	{
		printf("%d \n ",arr[i]);
	}
}

