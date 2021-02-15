#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*newnode,*temp; 
struct node*head=0;
void create()
{
  int c=1;
  int x;
  while(c==1)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&x);
    newnode->data=x;
    if(head==0)
    {
        head=newnode;
        temp=newnode;
    }
    else 
    {
        temp->next=newnode;
        temp=newnode;
    }
    temp->next=head;
    printf("PRESS 1 TO CONTINUE ELSE 0\n");
    scanf("%d",&c);
    }
}
void display()
{
    if(head==0)
    {
        printf("NO ELEMENT");
    }
    else 
    {
        temp=head;
        while(temp->next!=head)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
         printf("%d\n",temp->data);
    }
}
void insert()
{
    int p;
    int d;
    int i=1;
    temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data : ");
    scanf("%d",&d);
    newnode->data=d;
    printf("Enter the position :1.beginning 0.end or other ");
    scanf("%d",&p);
    if(p==1)
    {
    newnode->next=head;
    head=newnode;
    temp->next=head;
    }
    else if(p==0)
    {
    newnode->next=temp->next;
    temp->next=newnode;
    temp=newnode;
    }
    else
    {
        struct node*t;
        t=head;
        while(i<p-1)
        {
            t=t->next;
            i++;
        }
        newnode->next=t->next;
        t->next=newnode;
    }
}
void delete()
{
    int p;
    int i=1;
    printf("Enter the position :1.beginning 0.end or other ");
    scanf("%d",&p);
    temp=head;
    if(p==1)
    {
        head=head->next;
        free(temp);
    }
    else if(p==0)
    {
     struct node*nxt;
     nxt=head;
     while(nxt->next!=head)
     {
        temp=nxt;
       nxt=nxt->next;
     }
     temp->next=nxt->next;
     free(nxt);
    }
    else
    {
        struct node*nxt;
        nxt=head;
        while(i<p)
        {
           temp=nxt;
           nxt=nxt->next;
           i++;
        }
       temp->next=nxt->next;
        free(nxt);
    }
}
int main()
{
    int ch;
    create();
    for(int i=0;;i++)
    {
        printf("\nCIRCULAR LINKED LIST\n 1.INSERT\n 2.DELETE\n 3.DISPLAY\n 4.EXIT\n");
        printf("enter your choice : ");
        scanf("%d",&ch);
        if(ch==1)
        {
            insert();
        }
        else if(ch==2)
        {
            delete();
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






