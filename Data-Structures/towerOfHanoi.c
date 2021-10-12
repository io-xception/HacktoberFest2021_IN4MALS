#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *s;
};
void create(struct stack *st, int n)
{
    st->size = n;
    st->top = -1;
    st->s = (int *)malloc(st->size * sizeof(int));
}
void push(struct stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        printf("stack overflow\n");
    }
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}
int pop(struct stack *st)
{
    int x;
    if (st->top == -1)
    {
        printf("stack underflow\n");
        return -1;
    }
    else
    {
        return st->s[st->top--];
    }
}
void hanoi(struct stack *source, struct stack *dest, struct stack *aux, int n)
{
    int i = 0;
    while (i < n)
    {
        int x;
        x = pop(source);
        push(aux, x);
        i++;
    }
    i = 0;
    while (i < n)
    {
        int x;
        x = pop(aux);
        push(dest, x);
        i++;
    }
}
void display(struct stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        printf("%d ", st.s[i]);
    }
}
int main()
{
    int n;
    printf("Enter the number of disks\n");
    scanf("%d", &n);
    struct stack source;
    create(&source, n);
    for (int i = 0; i < n; i++)
    {
        push(&source, n - 1 - i);
    }
    struct stack aux;
    create(&aux, n);
    struct stack dest;
    create(&dest, n);
    hanoi(&source, &dest, &aux, n);
    display(dest);

    return 0;
}