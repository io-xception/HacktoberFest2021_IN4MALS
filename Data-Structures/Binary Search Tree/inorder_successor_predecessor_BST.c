#include<stdio.h>
#include<stdlib.h>
#define DEFNULL -1000000

typedef struct Node{
	int data;
	struct Node* left;
	struct Node* right;
}Node;

void insert(Node**,int);
void inorder(Node*);

int inorder_successor(Node*,int);
int inorder_predecessor(Node*,int);

int main()
{
	Node* root = NULL;
	insert(&root,6);
	insert(&root,2);
	insert(&root,9);
	insert(&root,2);
	insert(&root,3);
	insert(&root,8);
	insert(&root,1);
	insert(&root,5);
	
	inorder(root);	//Prints the BST in inorder format
	printf("\n%d\n",inorder_successor(root,5));	//find inorder successor of value "1" in the tree
	printf("%d\n",inorder_predecessor(root,5)); //find inorder predecessor of value "1" in the tree
	return 0;
}

void insert(Node** root,int n)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = n;
	temp->right = NULL;
	temp->left = NULL;
	
	if(!*root)
	{
		*root = temp;
		return;
	}
	
	if((*root)->data<n) insert(&(*root)->right,n);
	else insert(&(*root)->left,n);
}

void inorder(Node* root)
{
	if(!root) return;
	
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}

int inorder_successor(Node* root,int n)
{
	Node* beforeRoot = NULL;
	while(root && root->data != n)
	{
		if(root->data<n) root = root->right;
		else if(root->data>n) 
		{
			beforeRoot = root;	
			root = root->left;
		}
	}
	
	if(!root) return DEFNULL;
	
	if(root->right)	return root->right->data;
	
	return beforeRoot->data;
}

int inorder_predecessor(Node* root,int n)
{
	Node* beforeRoot = NULL;
	while(root && root->data != n)
	{
		if(root->data<n) 
		{
			beforeRoot = root;
			root = root->right;
		}
		else if(root->data>n) root = root->left;
	}
	
	if(!root) return DEFNULL;
	
	if(root->left) 
	{
		root = root->left;
		while(root->right) root = root->right;
		return root->data;
	}
	else if(!(root->right) && beforeRoot) return beforeRoot->data;
	
	return DEFNULL;
}
