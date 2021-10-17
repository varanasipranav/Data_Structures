#include<stdio.h>
#include<stdlib.h>
int hash(int key)
{
	return key%10;
}
int probe(int ht[],int index)
{
	int i=0;
	while(ht[index+(i*i)]==0)
	i++;
	return index+(i*i);
}
void insert(int ht[],int key)
{
	int index;
	index=hash(key);
	if(ht[index]==0)
	{
		ht[index]=key;
	}
	else
	{
		index=probe(ht,index);
		ht[index]=key;
	}
}
int main()
{
	int n,i,j;
	int ht[10]={0};
	printf("enter the nuber of elements");
	scanf("%d \n",&n);
	for(i=0;i<n;i++)
	{
		printf("enter your %d element \n ",i);
		scanf("%d",j);
		insert(ht,j);
	}
	for(i=0;i<10;i++)
	printf("%d \n",ht[i]);
	return 0;
}

