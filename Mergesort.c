#include<stdio.h>
void merge(int a[],int lb,int mid,int ub)
{
    int b[20];
    int i = lb;
    int j = mid+1;
    int k = lb;
    while((i<=mid)&&(j<=ub))
    {
    if(a[i]<=a[j])
    {
        b[k]=a[i];
        i++;
        k++;
    }
    else
    {
        b[k]=a[j];
        j++;
        k++;
    }
    }
    if(i>mid)
    {
        while(j<=ub)
        {
        b[k]=a[j];
        j++;
        k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++)
    {
        a[k]=b[k]; 
    }
}
void mergesort(int a[],int lb,int ub)
{
    int mid;
    int i;
    if(lb<ub)
    {
    //mid=(lb+ub)/2;
    mid = (lb+ub)/2;
    mergesort(a,lb,mid);
    mergesort(a,mid+1,ub);
    merge(a,lb,mid,ub);}
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
    mergesort(a,lb,ub);
    printf("AFTER SORTING :");
    for(i=lb;i<=ub;i++)
    {
    printf("%d",a[i]);
    }
}

