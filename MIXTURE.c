#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d %d",&a,&b);
        if(a>0 && b>0)
        printf("Solution\n");
        if(b==0)
        printf("Solid\n");
        if(a==0)
        printf("Liquid\n");
        n--;
    }
    return 0;
}
