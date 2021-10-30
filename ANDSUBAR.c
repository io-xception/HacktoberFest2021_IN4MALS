#include<stdio.h>
int main()
{
    int t,n,i=0,ans,l;
    scanf("%d",&t);
    while(t)
    {
        l=1;
        i=0;
        scanf("%d",&n);
        while(5)
        {
            i++;
            l*=2;
            if(n/l==0)
                break;
        }
        //printf("-------%d\n",l);
        l/=2;
        if(n%l==0)
        {
            printf("%d\n",l-l/2);
        }
        else
        {
        ans=n-l+1;
        printf("%d\n",ans);
        }
        t--;

    }
    return 0;
}