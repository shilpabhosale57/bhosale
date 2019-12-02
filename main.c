#include<stdio.h>
#include"stack.h"
int push(int [],int );
int pop (int [],int );
void display(int [],int);
static int top=-1;
 int arr[50];
int main()
{
    int ch;
    int arr[50];
   
    while(1)
    {
        printf("enter a choice:\n 1. push\n  2, pop\n 3.display\n 4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    top=push(arr,top);
                    break;
            case 2:
                   printf("\n pop compeleted");
                   top=pop(arr,top);
            case 3:
                  printf("\n display:\n");
                  display(arr,top);
                  break;
            case 4:
                exit(1);

        }
    }
}