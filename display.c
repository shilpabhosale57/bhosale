#include"stack.h"
void display(int arr[],int top)
{
    int i;
   
    if(top==-1)
    {
        printf("stack is underflow");
    }
    for(i=0;i<=top;i++)
    {
        printf("%d",arr[i]);
    }
}
