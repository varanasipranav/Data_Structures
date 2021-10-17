#include<stdio.h>
#include<stdlib.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        swap(&arr[min_idx], &arr[i]);
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
selectionSort(arr,n);
for(i=0;i<n;i++)
printf("%d \n",arr[i]);
return 0;
}
