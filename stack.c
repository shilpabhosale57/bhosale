#include<stdio.h>
void push (int , int);
int pop ();
void display(int, int);
 extern int top=-1;
# define MAX 50
extern arr[MAX];
int main()
{
    int ch,a,arr[MAX];
    printf("enter a choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("enter a ele");
                scanf("%d",&a);
                push(top,a,arr);
                break;
        case 2: 
                pop(top,arr);
                break;
        case 3: 
                display();
                break;
        case 4:
               printf("invalid choice");
               break;
        case 5:
               exit(1);
            
    }
    return 0;
}
