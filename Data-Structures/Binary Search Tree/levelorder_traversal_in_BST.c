#include<stdio.h>
#include<stdlib.h>
#define DEFNULL NULL

//Tree Structure
typedef struct Node{
	int data;
	struct Node* left;
	struct Node* right;
}Node;

//Queue structure
typedef struct QueNode{
	Node* data;
	struct QueNode* link;
}QueNode;

typedef struct Queue{
	QueNode* front;
	QueNode* rear;
}Queue;

//BST operations
Node* insert(Node*,int);
void levelorder(Node* root);

//Queue Operations
void enqueue(Queue*,Node*);
Node* dequeue(Queue*);
Node* peek(Queue*);
int isEmpty(Queue*);

int main()
{
	Node* root = NULL;
	
	char choice;
	do{
		int n;
		printf("Enter value to insert: ");
		scanf("%d",&n);

		root = insert(root,n);
		
		printf("Enter another value in BST?: ");
		scanf(" %c",&choice);
	}while(choice == 'y' || choice == 'Y');
	
	printf("\nOutput: ");
	levelorder(root);
	return 0;
}

Node* insert(Node* root,int n)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = n;
	temp->left = NULL;
	temp->right = NULL;
	
	if(root == NULL)
	{
		root = temp;
	}
	else if(root->data>=n)
	{
		root->left = insert(root->left,n);
	}
	else
	{
		root->right = insert(root->right,n);
	}
	return root;
}

void levelorder(Node* root)
{
	if(root==NULL) return;
	
	Queue queue = {NULL,NULL};
	enqueue(&queue,root);
	while(!isEmpty(&queue))
	{
		printf("%d ",peek(&queue)->data);
	
		if(peek(&queue)->left) enqueue(&queue,peek(&queue)->left);
		if(peek(&queue)->right) enqueue(&queue,peek(&queue)->right);
	
		dequeue(&queue);
	}
	printf("\n");
}

void enqueue(Queue* que, Node* data)
{
	QueNode* temp = (QueNode*)malloc(sizeof(QueNode));
	temp->data = data;
	temp->link = NULL;

	if(isEmpty(que))
	{
		que->front = que->rear = temp;
		return;
	}
	
	que->rear->link = temp;
	que->rear = que->rear->link;
}

Node* dequeue(Queue* que)
{
	if(isEmpty(que)) return DEFNULL;
	
	QueNode* temp = que->front;
	que->front = que->front->link;
	
	if(que->front == NULL) que->rear = NULL;
	
	Node* n = temp->data;
	free(temp);
	return n;
}

Node* peek(Queue* que)
{	
	if(isEmpty(que)) return DEFNULL;
	return que->front->data;
}

int isEmpty(Queue* que)
{
	if(que->front == NULL)  return 1;
	return 0;
}

//By Rudrashish Das
