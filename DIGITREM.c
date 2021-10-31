#include<stdio.h>
#include<math.h>
int check(int n,int d)//check the number is present or not
{
    while(n!=0)
    {
        if(n%10==d)
        return 1;
        n/=10;
    }
    return 0;
}
int pos(int n,int d)//returns the right most position
{
    int i,k=0;
    while(n!=0)
    {
        if(n%10==d)
        i=k;
        n/=10;
        k++;
    }
    return i;
}
int case9(int m,int in)
{
    int l,p;
    l=(int)pow(10.0,(double)(in+1));//takes digit right most index and raises it power by ten
    p=m/l;//getting digits after number
    p++;//getting smallest number
    return (p*l);
}
int main()
{
    int t,m,d,l,p;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d %d",&m,&d);
        if(check(m,d)==0)//no digit scenerio
        {
            printf("0\n");
        }
        else
        {
            int in=pos(m,d);
            if((d>=1 && d<=8))//if digit is between 1 and 8
            {
                l=(int)pow(10.0,(double)in);//takes digit right most index and raises it power by ten
                p=m%(l*10);//getting digits after number
                p=((d+1)*l)-p;//getting smallest number
                printf("%d\n",p);
            }
            else if(d==9) 
            {
                int n=m;
                while(check(m,9)!=0)
                {
                    in=pos(m,9);
                    m=case9(m,in);
                }
                printf("%d\n",(m-n));
            }
            else
            {
                p=0;
                int n=in;
                int k=m;
                while(in!=-1)
                {
                    p+=(int)pow(10.0,(double)in);
                    in--;
                }
                n++;
                l=((int)pow(10.0,(double)n));
                m=(m/l)*l+p;
                printf("%d\n",(m-k));
            }
        }
        t--;
    }
    return 0;
}