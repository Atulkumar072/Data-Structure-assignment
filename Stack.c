#include<stdio.h>
void push();
void pop();
void display();
int stack[100],top=-1,n,variable,choice;
int main()
{
    printf("Please enter the size of stack: ");
    scanf("%d",&n);
    do
    {
       printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
       printf("Please enter choice: ");
       scanf("%d",&choice);
       switch(choice)
       {
           case 1:
           {
               push();
               break;
           }
           case 2:
           {
               pop();
               break;
           }
           case 3:
           {
               display();
               break;
           }
           case 4:
           {
               break;
           }
           default:
           {
               printf("\nInvalid choice");
           }
       }
    } while (choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\nSTACK OVERFLOW");
    }
    else
    {
        printf("Enter a value to be pushed: ");
        scanf("%d",&variable);
        top++;
        stack[top]=variable;
    }

}
void pop()
{
    if(top<=-1)
    {
        printf("STACK UNDERFLOW");
    }
    else
    {
        printf("\nThe element is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("Elements in stack are: ");
        for(int i=top;i>=0;i--)
        printf("%d\t",stack[i]);
    }
    else 
    {
        printf("Stack Empty");
    }
}