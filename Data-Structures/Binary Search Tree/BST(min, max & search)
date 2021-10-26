#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node* right;
	struct Node* left;
}Node;


int search(Node*,int);
void insert(Node**,int);
int findMin(Node*);
int findMax(Node*);

int main()
{
	Node* root = NULL;
	insert(&root,2);
	insert(&root,3);
	insert(&root,5);
	insert(&root,1);

	printf("%d\n",search(root,1));	//Returns 1 if value "1" is found else returns 0
	printf("%d\n",findMin(root));	//Returns Min element in BST
	printf("%d\n",findMax(root));	//Returns Max element in BST
	return 0;
}

int search(Node* root, int n)
{
	if(!root) return 0;
	
	Node* temp = root;
	
	while(temp && temp->data != n)
	{
		if(temp->data>=n) temp=temp->left;
		else temp=temp->right;
	}

	if(!temp) return 0;
	return 1;
}

void insert(Node** root, int n)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = n;
	temp->left = NULL;
	temp->right = NULL;
	
	if(!*root)
	{
		*root = temp;
		return;
	}
	
	Node* ptrR = *root;
	Node* ptr_prev;
	
	while(ptrR)
	{
		ptr_prev=ptrR;

		if(ptrR->data>=n) ptrR=ptrR->left;
		else ptrR=ptrR->right;
	}
	
	if(ptr_prev->data>n) ptr_prev->left = temp;
	else ptr_prev->right = temp;	
}

int findMin(Node* root)
{
	if(!root) return -1;
	Node* temp = root;
	while(temp->left!=NULL) temp=temp->left;
	return temp->data;
}

int findMax(Node* root)
{
	if(!root) return -1;
	Node* temp = root;
	while(temp->right!=NULL) temp=temp->right;
	return temp->data;
}
