#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*top = NULL;
void push();
void pop();
void display();
int main()
{
    
    int ch,i;
    printf("_____STACK IMPLEMENTATION____\n");
    for(i=0;;i++)
    {
    printf("Enter your choice : \n");
    printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        push();
    }
    else if(ch==2)
    {
        pop();
    }
    else if(ch==3)
    {
        display();
    }
    else
    {
        exit(0);
    }
    }
}
void push()
{
    int x;
    printf("Enter the element to be pushed : ");
    scanf("%d",&x);
    struct node*newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = x;
    newnode->next =top;
    top=newnode;
}
void pop()
{
    
    if(top==-1)
    {
        printf("\nUNDERFLOW\n");
    }
    else
    {
        struct node*temp;
        temp = top;
        printf("The popped element is %d\n",top->data);
        top=top->next;
        free(temp);
    }
}
void display()
{
        struct node*temp;
        temp = top;
        printf("The elements of the stack are : ");
        while(temp!=0)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
}
