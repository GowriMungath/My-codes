#include<stdio.h>
#include<stdlib.h>
#define N 10
void enqueue(int);
void dequeue();
void peek();
void display();
int cqueue[10];
int ch,x;
int front = -1;
int rear = -1;
int main()
{
    int i;
    for(i=1;;i++)
    {
    printf("\n1.ENQUEUE\t2.DEQUEUE\t3.PEEK\t4.DISPLAY\t5.EXIT\n");
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
    if((rear+1)%N==front)
    {
        printf("Overflow");
    }
    else if((rear==-1)&&(front==-1))
    {
        rear=front=0;
        cqueue[rear]=x;
    }
    {
       rear=(rear+1)%N;
       cqueue[rear]=x;
    }
}
void dequeue()
{
    if((front==-1)&&(rear==-1))
    {
        printf("underflow");
    }
    else if(front==rear)
    {
        printf("%d",cqueue[front]);
        front=rear=-1;
    }
    else
    {
        printf("The item to be removed is %d",cqueue[front]);
        front=(front+1)%N;
    }
}
void peek()
{
    if((front==-1)&&(rear==-1))
    {
        printf("underflow\n");
    }
    else
    {
        printf("%d\n",cqueue[front]);
    } 
}
void display()
{
    if((rear==-1)&&(front==-1))
    {
        printf("underflow");
    }
    else
    {
    int i=front+1;
    while(i!=rear)
    {
        printf("%d\n",cqueue[i]);
        i=(i+1)%N;
    }
    printf("%d",cqueue[rear]);
    }
}
