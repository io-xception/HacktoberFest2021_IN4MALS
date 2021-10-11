#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void Push(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data=data;
    temp->next=head;
    head=temp;
}

void Pop(){
    struct Node* temp = head;
    head=temp->next;
    free(temp);
}

void Print(){
    struct Node* temp=head;
    while(temp!=NULL){
        printf(" %d",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
}


int main()
{
    head=NULL;
    int noofelt;
    scanf("%d",&noofelt);
    int items[noofelt];
    for(int i=0;i<noofelt;++i)
        scanf("%d",&items[i]);
    for(int i=0;i<noofelt;++i)
        Push(items[i]);
    Print();
    Pop();
    Pop();
    Print();

    return 0;
}
