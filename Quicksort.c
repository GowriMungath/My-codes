#include<stdio.h>
int partition(int a[20],int lb, int ub)
{
    int pivot,start,end;
    pivot=a[lb];
    start=lb;
    end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            int temp;
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    int temp;
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;
    return end;
}
void quicksort(int a[20],int lb,int ub)
{
    if(lb<ub)
    {
        int loc;
        loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}
int main()
{
    int n,i,a[20],temp,j,min;
    int lb=0;
    int ub;
    printf("Enter n :");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    ub=n-1;
    quicksort(a,lb,ub);
    printf("SORTED ARRAY\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
