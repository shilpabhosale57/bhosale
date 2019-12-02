#include"stack.h"
int push( int arr[],int top)
{
    int a;
    if(top==49)
    {
        printf("stack is  full");
    }
    else
    {
    printf("enter a to push");
    scanf("%d",&a);
    arr[++top]=a;
    }
    return top;
}
