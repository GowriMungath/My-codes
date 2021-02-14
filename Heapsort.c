#include<stdio.h>
void maxheapify(int a[],int n,int i)
{
    int temp,largest,l,r;
    largest = i;
    l=2*i + 1;
    r=(2*i)+2;
    while((l<n)&&(a[l]>a[largest]))
    {
        largest=l;
    }
    while((r<n)&&(a[r]>a[largest]))
    {
        largest=r;
    }
    if(largest!=i)
    {
        temp = a[largest];
        a[largest]=a[i];
        a[i]=temp;
        maxheapify(a,n,largest);
    }
}
void heapsort(int a[],int n)
{
    int i,temp;
    for(i=(n/2)-1;i>=0;i--)
    {
        maxheapify(a,n,i);
    }
    for(i=n-1;i>0;i--)
    {
       temp=a[i];
       a[i]=a[0];
       a[0]=temp;
       maxheapify(a,i,0);
    }
}
int main()
{
    int a[20],n,i;
    printf("Enter n :");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    heapsort(a,n);
    printf("SORTED ARRAY\n");
    for(i=0;i<n;i++)
    {
       printf("%d\t",a[i]); 
    }
}
