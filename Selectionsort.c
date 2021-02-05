#include<stdio.h>
int main()
{
    int n,i,a[10],temp,j,min;
    printf("Enter n :");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("SORTED ARRAY\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
