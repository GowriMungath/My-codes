#include<stdio.h>
int main()
{ int n,i,j,A[20],temp;
    printf("Enter n :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[i])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",A[i]);
    }
}
