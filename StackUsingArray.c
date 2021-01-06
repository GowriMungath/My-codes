#include<stdio.h>
#include<stdlib.h>
#define N 10
void push(int);
void pop();
void peek();
void display();
int stack[10];
int ch,x;
int top = -1;
int main()
{
    int i;
    for(i=1;;i++)
    {
    printf("1.PUSH\t2.POP\t3.PEEK\t4.DISPLAY\t5.Exit\n");
    printf("choice :");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : 
        printf("Enter:");
        scanf("%d",&x);
        push(x);
        break;
        case 2 :
        pop();
        break;
        case 3 :
        peek();
        break;
        case 4 :
        display();
        break;
        case 5 :
        exit(0);
    }
    }
}
void push(int x)
{
    if(top==N-1)
    {
        printf("Overflow");
    }
    else 
    {
       top++;
       stack[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("The item to be removed is %d",stack[top]);
        top--;
    }
}
void peek()
{
    if(top==-1)
    {
        printf("underflow\n");
    }
    else
    {
        printf("%d\n",stack[top]);
    } 
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}
