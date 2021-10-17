#include<stdio.h>
#include<math.h>
int main()
{
	int arr [5];
	int l,h,m,i,item;
	l=0;
	h=10;
	int flag=0;
	printf("enter the sorted array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the item");
	scanf("%d",&item);
	while(l<=h)
	{
		m=ceil((l+h)/2);
		if(item==arr[m])
		{
			flag=1;
			break;
		}
		if(item>arr[m])
		l=m+1;
		if(item<arr[m])
		h=m-1;
	}
	if(flag==1)
	printf("the element is at %d ",m+1);
	if(flag==0)
	printf("element is not in the array");
	return 0;
}
