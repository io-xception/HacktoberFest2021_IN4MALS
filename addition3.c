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
void create(int a[], int n)
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
int form(struct node *q)
{
    struct node *p;
    p=q;
    int x=0;
    while(p!=NULL)
    {
        x=x*10+p->data;
        p=p->next;
    }
    return x;
}
int main()
{
    int a[]={1,2,3};
    int b[]={3,4,5};
    create1(a,3);
    create(b,3);
    printf("%d\n",form(first1));
    printf("%d",form(first2));
    int res=form(first1)+form(first2);
    printf("\n%d\n",res);

    return 0;
}
