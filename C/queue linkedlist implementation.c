

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void Enqueue(int x){
    struct Node* temp =(struct Node*)malloc(sizeof(struct Node*));
    temp->data=x;
    temp->next=NULL;
    if(front==NULL && rear==NULL){
        front=rear=temp;
        return;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}

void Dequeue(){
    struct Node* temp = front;
   if(front==NULL){
       printf("Error! Empty Queue");
       return;
   }
   if(front==rear)
   {
       front=rear=NULL;
   }
   else{
       front=front->next;
   }
   free(temp);
}

void Front(){
    printf("\nFront    :   %d\n", front->data);   
}

void Print(){
    struct Node* temp = front;
    if(temp==NULL){
        printf("Error! Empty Queue!");
    }
    printf("Queue:  ");
    while(temp!=NULL){
        printf("  %d  ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    Enqueue(2);Print();
    Enqueue(4);Print();
    Enqueue(5);Print();
    Enqueue(1);Print();
    Dequeue();Print();
    Dequeue();Print();
    Front();

    return 0;
}

