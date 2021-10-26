#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node* left;
	struct Node* right;
}Node;

void insert(Node**,int);
void inorder(Node*);

void swap(Node**);
Node* invertTree(Node*);

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
	
	inorder(root);
	printf("\n");
	
	root = invertTree(root);
	
	inorder(root);
	printf("\n");
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
	
	if((*root)->data<n)	insert(&(*root)->right,n);
	else insert(&(*root)->left,n);
}

void inorder(Node* root)
{
	if(!root) return;
	
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}

void swap(Node** root)
{
    if(!*root) return;
    
    Node* temp;
    
    temp = (*root)->right;
    (*root)->right = (*root)->left;
    (*root)->left = temp;
    
    swap(&(*root)->left);
    swap(&(*root)->right);
}

Node* invertTree(Node* root)
{
    Node* tempRoot = root;
    swap(&tempRoot);
    return tempRoot;
}

//By Rudrashish Das
