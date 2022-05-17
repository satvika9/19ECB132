#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
int height(struct node* node)
{
	if (node==NULL)
	      return-1;
	else
	{
		int ld=height(node->left);
		int rd=height(node->right);
		if (ld>rd)
		return(ld+1);
		else
	 	    return (rd+1);
	}
}
struct node* newNode(int data)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=0;
	node->right=0;
	return(node);
}
int main()
{
	struct node* root=newNode(3);
	root->left=newNode(2);
	root->right=newNode(5);
	root->left->left=newNode(1);
	root->right->left=newNode(4);
	root->right->right=newNode(6);
	root->right->right->right=newNode(7);
	printf("height=%d",height(root));
	return 0 ;
}
