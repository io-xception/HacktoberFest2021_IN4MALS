#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *first1 = NULL, *first2 = NULL, *inter = NULL, *lasti = NULL;
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
void push(int value)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = value;
    p->next = NULL;
    if (inter == NULL)
    {
        inter = p;
        lasti = p;
    }
    else
    {
        lasti->next = p;
        lasti = p;
    }
}
void intersect(struct node *p, struct node *q)
{

    while (p != NULL && q != NULL)
    {

        if (p->data > q->data)
        {
            push(q->data);
            q = q->next;
        }
        else
        {
            push(p->data);
            p = p->next;
        }
    }
    if (p == NULL)
    {
        while (q != NULL)
        {
            push(q->data);
            q = q->next;
        }
    }
    else
    {
        while (p != NULL)
        {
            push(p->data);
            p = p->next;
        }
    }
}

void Display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int main()
{
    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6};
    create1(a, 3);
    create2(b, 3);
    intersect(first1, first2);
    Display(inter);

    return 0;
}
