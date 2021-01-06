#include<stdio.h>
#include<stdlib.h>
#define N 10
void enqueue(int);
void dequeue();
void peek();
void display();
int queue[10];
int ch,x;
int front = -1;
int rear = -1;
int main()
{
    int i;
    for(i=1;;i++)
    {
    printf("1.Enqueue\t2.dequeue\t3.PEEK\t4.DISPLAY\t5.Exit\n");
    printf("choice :");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : 
        printf("Enter:");
        scanf("%d",&x);
        enqueue(x);
        break;
        case 2 :
        dequeue();
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
void enqueue(int x)
{
    if(rear==N-1)
    {
        printf("Overflow");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else 
    {
        rear++;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("underflow");
    }
    else if(front==rear)
    {
        printf("%d",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("The item to be popped is %d",queue[front]);
        front++;
    }
}
void peek()
{
    if(front==-1)
    {
        printf("underflow\n");
    }
    else
    {
        printf("%d\n",queue[front]);
    } 
}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",queue[i]);
    }
}
