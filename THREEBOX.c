#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if((a+b+c)<=d)
        printf("1\n");
        else if((a+b)>d)
        printf("3\n");
        else 
        printf("2\n");
        n--;
    }
    return 0;
}