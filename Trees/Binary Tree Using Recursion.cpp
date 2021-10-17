#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *lc;
	int data;
	struct node *rc;
};
struct node * tree()
{
	int x;
	struct node *t;
	t=(struct node *)malloc(sizeof(struct node));
	printf("enter the data or -1 \n ");
	scanf("%d",&x);
	if(x==-1)
	return 0;
	else
	{
		t->data=x;
		printf("enter the left child of %d \n ",t->data);
		t->lc=tree();
		printf("enter the right sub tree %d \n ",t->data);
		t->rc=tree();
		return t;
	}
}
	void inorder(struct node *st)
	{
		printf("\n %d",st->data);
		inorder(st->lc);
		inorder(st->rc);
	}
int main()
{
	struct node *root;
	root=tree();
	inorder(root);
}

