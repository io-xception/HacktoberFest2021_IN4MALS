#include<stdlib.h>
#include<stdio.h>
int stack[100];
int top=0;
void push(int l)
{
    stack[top]=l;
    top++;
}
int pop()
{
    if(top!=0)
    return stack[--top];
    else 
    return -42069;
}
int main()
{
int n,i=0,j,k;
printf("Enter the amount of  expression you want to enter\n");
scanf("%d",&n);
char *arr=(char*)malloc(sizeof(char)*n);
printf("Enter the expression without any brackets\n");
scanf("%s",arr);
while(i<n){
    if((int)arr[i]>=48 &&(int)arr[i]<=57){
        printf("%d\n",arr[i]-48);
    push(((int)arr[i]-48));
    }
    else{
        j=pop();
        k=pop();
        switch((int)arr[i])
        {
        case 43:
        printf("+ %d\n",(k+j));
        push(k+j);
        break;
        case 45:
        printf("- %d\n",(k-j));
        push(k-j);
        break;
        case 42:
        printf("* %d\n",(k*j));
        push(k*j);
        break;
        case 47:
        printf("/ %d\n",(k/j));
        push(k/j);
        break;
        }
    }
    i++;
}
printf("The remaining number is %d\n",pop());
    return 0;
}

