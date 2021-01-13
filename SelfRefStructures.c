#include<stdio.h>
struct node
{
    int i;
    char c;
    struct node*ptr;
};
int main()
{
    struct node obj1;
    struct node obj2;
    
    obj1.i=5;
    obj1.c='A';
    obj1.ptr=NULL;
    
    obj2.i=6;
    obj2.c='B';
    obj2.ptr=NULL;
    
    obj1.ptr=&obj2;
    printf("%d%c",obj1.ptr->i,obj1.ptr->c);
}
