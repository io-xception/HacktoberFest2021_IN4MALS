#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *first1 = NULL, *first2 = NULL;
void create1(int a[], int n)
{
    struct node *p, *last;
    first1 = (struct node *)malloc(sizeof(struct node));
    first1->data = a[0];
    first1->next = NULL;
    last = first1;
    for (int i = 1; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        p->data = a[i];
        p->next = NULL;
        last->next = p;
        last = p;
    }
}
void create2(int a[], int n)
{
    struct node *p, *last;
    first2 = (struct node *)malloc(sizeof(struct node));
    first2->data = a[0];
    first2->next = NULL;
    last = first2;
    for (int i = 1; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        p->data = a[i];
        p->next = NULL;
        last->next = p;
        last = p;
    }
}

void find(struct node *p, struct node *q)
{
    int pc=1,qc=1,flag=0;
    //flag->denote if intersection isfound or not
    //pc , qc->count off nodes of the two linked loist.
    while(p->next!=NULL)
    {
        while(q->next!=NULL)
        {
            if(p->next==q->next)
            {
                flag=1;
                break;
            }
            q=q->next;
            qc++;
        }
        if(flag==1)
        {
            break;
        }
        p=p->next;
        pc++;
    }
    

}

int main()
{
    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6};
    create1(a, 3);
    create2(b, 3);
    

    return 0;
}
