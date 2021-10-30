#include<stdio.h>
char stack[100];
int top=0;
void push(char l)
{
    stack[top]=l;
    top++;
}
char pop()
{
    if(top!=0)
    return stack[--top];
    else 
    return "n";
}
char peek()
{
    return stack[top];
}
int main()
{
    char s[1000];
    int i=0,flag=0;
    printf("Enter the string of brackets\n");
    scanf("%s",s);
    while(s[i]!='\0')
    {
        //printf("%c\n",s[i]);
        if((int)s[i]==40||(int)s[i]==91||(int)s[i]==123)
        {
           push(s[i]);
           //printf("pushed\n"); 
        }
        if((int)s[i]==41||(int)s[i]==125||(int)s[i]==93)
        {
            char a=pop();
            if((int)a==40&&(int)s[i]==41)
            {
            //printf("popped\n");
            }
            else if((int)a==123&&(int)s[i]==125)
            {
            //printf("popped\n");
            }
            else if((int)a==91&&(int)s[i]==93)
            {
            //printf("popped\n");
            }
            else{
                flag++;
                //printf("%c flagged\n",s[i]);
                break;
            }
        }
        i++;
    }
    if(flag!=0)
        printf("Not Balanced\n");
    else 
        printf("Balanced\n");
    return 0;
}

