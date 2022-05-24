#include<stdio.h>
//Declaring functions
void push();
void pop();
void menu();
void is_empty();
void is_full();
void display();
int stack[100],top=-1,n,variable,choice,size;  //Declaring variables
int main()
{
    printf("Enter any key to continue: ");
    getch(); // To hold screen untill user press any key
    system("cls");  // To clear scrreen
    fflush(stdin);  // To clear output buffer
    printf("Please enter the size of stack: ");
    scanf("%d",&n);
    menu(); //Calling menu function
}
void menu()    //Function to display menu
{
       printf("\n\n1.PUSH\n2.POP\n3.DISPLAY\n4.Is_EMPTY\n5.Is_FULL\n6.EXIT");
       printf("\nPlease enter your choice: ");
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
               is_empty();
               break;
           }
           case 5:
           {
               is_full();
               break;
           }
           case 6:
           {
               break;
           }
            default:
           {
               printf("\nInvalid choice");
           }
       }
}
void push()
{
    if(top>=n-1) //checking stack is full or not
    {
        printf("\nSTACK OVERFLOW\n");
    }
    else
    {
        printf("\nEnter a value to be pushed: ");
        scanf("%d",&variable);
        top++;
        stack[top]=variable;
    }
    menu();

}
void pop()
{
    if(top<=-1) //checking stack empty or not
    {
        printf("\nSTACK UNDERFLOW\n");
    }
    else
    {
        printf("\nThe element is %d",stack[top]);
        top--;
    }
    menu();
}
void display()  //Function to display elements in stack
{
    if(top>=0)
    {
        printf("\nElements in stack are: ");
        for(int i=top;i>=0;i--)
        printf("%d\t",stack[i]);
    }
    else 
    {
        printf("\nStack Empty\n");
    }
    menu();
}
void is_empty() //Function to check stack i.e empty or not empty
{
    if(top<=-1)
    {
        printf("\nStack is empty!\n");
    }
    else
    {
        printf("\nStack is not empty\n");
    }
    menu();
}
void is_full()  //Function to check stack i.e full or not full
{
    if(top>=n-1)
    {
        printf("\nStack is full!");
    }
    else
    {
        printf("Stack is not full");
    }
    menu();
}
