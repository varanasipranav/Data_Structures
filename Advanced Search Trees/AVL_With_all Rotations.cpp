#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *lc;
	struct node *rc;
	int height;
}*root=NULL;
int nodeheight(struct node *p)
{
	int hl,hr;
	hl=p && p->lc? p->lc->height:0;	
	hr=p && p->rc? p->rc->height:0;
	return hl>hr? hl+1:hr+1;
}
int balancefactor(struct node *p)
{	int hl,hr;
	hl=p && p->lc? p->lc->height:0;	
	hr=p && p->rc? p->rc->height:0;
	return	hl-hr;
}
struct node * LLrotation(struct node *p)
{
	struct node *pl=p->lc;
	struct node *plr=pl->rc;
	p->lc=plr;
	pl->rc=p;
	p->height=nodeheight(p);
	pl->height=nodeheight(p);
	if(p==root)
	root=pl;
	return pl;
 } 
 struct node *RRrotation(struct node *p)
 {
 	struct node *pr=p->rc;
 	struct node *prl=pr->lc;
 	pr->lc=p;
 	p->rc=prl;
 	if(p==root)
	root=pr;
	return pr;
 }
 struct node *LRrotation(struct node *p)
 {
 	struct node *pl=p->lc;
 	struct node *plr=pl->rc;
 	pl->rc=plr->lc;
 	p->lc=plr->rc;
 	plr->lc=pl;
 	plr->rc=p;
 	if(p==root)
 	root=plr;
 	return plr;
 }
 struct node *RLrotation(struct node *p)
 {
 	struct node *pr=p->rc;
 	struct node *prl=pr->lc;
 	p->rc=prl->lc;
 	pr->lc=prl->rc;
 	prl->lc=p;
 	prl->rc=pr;
 	if(p==root)
 	root=prl;
 	return prl;
 }
  void insert(int x)
  {
  	struct node *t,*p=root,*r;
  	t=(struct node *)malloc(sizeof(struct node));
 	t->data=x;
 	t->height=1;
 	t->lc=t->rc=NULL;
  	if(root==NULL)
	{
		root=t;
   }
   while(p)
   {
   	r=p;
   	if(p->data==x)
   	return ;
   	else if(p->data<x)
   	p=p->rc;
   	else
   	p=p->lc;
   }
   if(x>r->data)
   r->rc=t;
   else
   r->lc=t;
}
preorder(struct node *p)
{
	if(p)
	{
		printf("%d \n",p->data);
		preorder(p->lc);
		preorder(p->rc);
	}
}
int main()
{
	root=(struct node *)malloc(sizeof(struct node ));
	int i,x,n;
	printf("enter the number of nodes you want : \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element you want to insert \n ");
		scanf("%d",&x);
		insert(x);
	}
	preorder(root);
	return 0;
	 }   
