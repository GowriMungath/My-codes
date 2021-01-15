#include<stdio.h>
#include<stdlib.h>
struct node
{
    int a;
    struct node*next;
    struct node*prev;
};
struct node*head,*temp,*newnode,*prevnode,*nextnode;
int ch=1;
int c,cho,pos,i;
void insertatbeg()
{
    newnode->next=head;
    head=newnode;
    newnode->next->prev=head;
}
void insertatend()
{
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;
    
}
void insertatpos()
{
    int i=1;
    printf("Enter the position : ");
    scanf("%d",&pos);
    temp=head;
    while(i<pos-1)
    {
        prevnode=temp;
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=newnode->next->prev;
    newnode->next->prev=temp->next;
}
void deleteatbeg()
{
    head=head->next;
    head->prev=0;
    free(temp);
}
void deleteatend()
{
    temp=head;
    while(temp->next!=0)
    {
        prevnode=temp;
        temp=temp->next;
    }
    prevnode->next=0;
    temp->prev=0;
    free(temp);
}
void deleteatpos()
{
    printf("Enter the position : ");
    scanf("%d",&pos);
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    nextnode->next->prev=temp;
    nextnode->prev=0;
    nextnode->next=0;
    free(nextnode);
}
void display()
{
temp=head;
while(temp!=0)
{
    printf("%d\t",temp->a);
    temp=temp->next;
}
}

int main()
{
head=0;
temp=head;

printf("CREATION\n");
while(ch!=0)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data : ");
scanf("%d",&newnode->a);
newnode->prev=0;
newnode->next=0;
if(head==0)
{
    head=temp=newnode;
}
else
{
   temp->next=newnode;
   newnode->prev=temp;
   temp=newnode;
}
printf("Do you want to continue ? if yes, enter 1 or enter 0 : ");
scanf("%d",&ch);
}
temp=head;
while(temp!=0)
{
    printf("%d\t",temp->a);
    temp=temp->next;
}
for(i=0;;i++)
{
printf("\nOPERATIONS\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
printf("Enter your choice : ");
scanf("%d",&c);
if(c==1)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d",&newnode->a);
    printf("1.Insert at beginning\n");
    printf("2.Insert at end\n");
    printf("3.Insert at a given position\n");
    printf("Enter your choice : ");
    scanf("%d",&cho);
    if(cho==1)
    {
        insertatbeg();
    }
    else if(cho==2)
    {
        insertatend();
    }
    else if(cho==3)
    {
        insertatpos();
    }
}
else if(c==2)
{
    printf("1.DELETE FROM beginning\n");
    printf("2.DELETE FROM end\n");
    printf("3.DELETE FROM a given position\n");
    printf("Enter your choice : ");
    scanf("%d",&cho);
    if(cho==1)
    {
        deleteatbeg();
    }
    else if(cho==2)
    {
        deleteatend();
    }
    else if(cho==3)
    {
        deleteatpos();
    } 
}
else if(c==3)
{
    display();
}
else if(c==4)
{
    exit(0);
}
}
}

