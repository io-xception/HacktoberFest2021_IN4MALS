#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct term
{
    int coef;
    int exp;
};
struct poly
{
    int n;
    struct term *t;
};
void create(struct poly *p)
{
    printf("enter number  of terms\n");
    scanf("%d",&p->n);
    p->t=(struct term *)malloc(p->n*sizeof(struct term));
    printf("enter terms\n");
    for(int i=0;i<p->n;i++)
    {
        scanf("%d %d",&p->t[i].coef,&p->t[i].exp);
    }
}
void display(struct poly p)
{
    for(int i=0;i<p.n;i++)
    {
        printf("%dx%d + ",p.t[i].coef,p.t[i].exp);
    }
    printf("0 \n");
}
struct poly * add(struct poly *p,struct poly *q)
{
    struct poly *a;
    a=(struct poly *)malloc(sizeof(struct poly));
    a->t=(struct term *)malloc((p->n+q->n)*sizeof(struct term));
    int i=0,j=0,k=0;
    while(i<p->n&&j<q->n)
    {
        if(p->t[i].exp>q->t[j].exp)
        {
            a->t[k++]=p->t[i++];
        }
        else if(p->t[i].exp<q->t[j].exp)
        {
            a->t[k++]=q->t[j++];
        }
        else{
            a->t[k].exp=p->t[i].exp;
            a->t[k++].coef=p->t[i++].coef+q->t[j++].coef;
        }
    }
    for(;i<p->n;i++)
    {
        a->t[k++]=p->t[i++];
    }
    for(;j<q->n;j++)
    {
        a->t[k++]=q->t[j++];
    }
    a->n=k;
    return a;
}
int main()
{
    struct poly p1,p2,*p3;
    create(&p1);
    display(p1);
    create(&p2);
    display(p2);
    p3=add(&p1,&p2);
    display(*p3);

return 0;
}