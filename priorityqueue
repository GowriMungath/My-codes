//program to implement priority queue
//Priority is set in the highest to lowest order
#include<stdio.h>
#include<stdlib.h>
int pr[10];
int f = -1;
int r = -1;
int N,ch,i,item,j,temp;
void enqueue(int);
void dequeue();
void display();
int main()
{
   printf("Enter the value of N :");
   scanf("%d",&N);
   for(i=0;;i++)
   {
        printf("Enter your choice :\n");
        printf("1.Insertion\n");
        printf("2.Deletion\n");
        printf("3.Display\n");
        printf("4.exit\n");
        scanf("%d",&ch);
        if(ch==1)
        {
                for(i=0;i<N;i++)
                {
                        printf("Enter the element to be inserted : ");
                        scanf("%d",&item);
                        enqueue(item);
                }
        }
        else if(ch==2)
        {
                dequeue();
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
void enqueue(int item)
{
    if(r>N)
    {
        printf("OVERFLOW\n");
    }
    else if((f==-1)&&(r==-1))
    {
        f=r=0;
        pr[r]=item;
    }
    else
    {
        r++;
        pr[r]=item;
    }
}
void dequeue()
{
    
     if((f==-1)&&(r==-1))
     {
        printf("UNDERFLOW\n");
     }
     else if(f==r)
     {
        printf("The element deleted is : %d\n",pr[f]);
        f=r=-1;
     }
     else 
     {
       for(i=f;i<=r;i++)
       {
       for(j=i+1;j<=r;j++)
        {
            if(pr[j]>pr[i])
            {
                temp = pr[i];
                pr[i] =pr[j];
                pr[j] = temp;
            }
        }
       }
       printf("The element deleted is %d \n ",pr[f]);
       f++;
     }
}
void display()
{
    printf("The elements of priority queue are :\t");
    for(i=f;i<=r;i++)
    {
        printf("%d\t",pr[i]);
    }
    printf("\n");
}
