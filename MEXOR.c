#include <stdio.h>
#include <math.h>
int main(){
    int T=0;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        int X=0,flag=0;
        scanf("%d",&X);
        if(X==0){
            printf("1\n");
        }
        else{
            for(int r=0;flag==0;r++){
                if(X>=pow(2,r)&&X<pow(2,(r+1))){
                    if((X+1)==pow(2,(r+1))){
                        printf("%d\n",X+1);
                        break;
                    }
                    else{
                        printf("%.0f\n",pow(2,r));
                        break;   
                    }
                }
            }
        }
    }
    return 0;
}