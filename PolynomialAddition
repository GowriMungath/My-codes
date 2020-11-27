#include<stdio.h>
int main()
{
    int d1,d2,i,p1[20],p2[20],j,p3[20];
    printf("Enter the degree of polynomial 1: ");
    scanf("%d",&d1);
    printf("Enter the degree of polynomial 2: ");
    scanf("%d",&d2);
    printf(" ___READING POLYNOMIAL 1___\n");
    for(i=d1;i>=0;i--)
    {
        printf("Enter the coefficent of x^%d : ",i);
        scanf("%d",&p1[i]);
    }
    printf("POLYNOMIAL 1: ");
    for(i=d1;i>0;i--)
    {
    printf("%dx^%d+",p1[i],i);
    }
    printf("%d\n",p1[0]);
    printf(" ___READING POLYNOMIAL 2___\n");
    for(i=d2;i>=0;i--)
    {
        printf("Enter the coefficent of x^%d : ",i);
        scanf("%d",&p2[i]);
    }
    printf("POLYNOMIAL 2: ");
    for(i=d2;i>0;i--)
    {
    printf("%dx^%d+",p2[i],i);
    }
    printf("%d\n",p2[0]);
    if(d1>d2)
    {
        for(i=d2,j=d2;i>=0,j>=0;i--,j--)
        {
            p3[j]=p1[i]+p2[i];
        }
        for(i=d1,j=d1;i>d2,j>d2;i--,j--)
        {
            p3[j]=p1[d1];
        }
        printf("___RESULTANTANT POLYNOMIAL__");
        for(j=d1;j>0;j--)
        {
            printf("%dx^%d+",p3[j],j);
        }
        printf("%d",p3[0]);
    }
    if(d1<d2)
    {
        for(i=d1,j=d1;i>=0,j>=0;i--,j--)
        {
            p3[j]=p1[i]+p2[i];
        }
        for(i=d2,j=d2;i>d1,j>d1;i--,j--)
        {
            p3[j]=p2[d2];
        }
        printf("___RESULTANTANT POLYNOMIAL__");
        for(j=d2;j>0;j--)
        {
            printf("%dx^%d+",p3[j],j);
        }
        printf("%d",p3[0]);
    }
    
}
