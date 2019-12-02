#include"stack.h"
int pop (int arr[],int top)
{
    if(top==49)
    {
        printf("stack is empty");
    }
    arr[top--];
    return top;
}
