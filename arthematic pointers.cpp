#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d\n",&a,&b);
    int *p,*q;
    p=&a;//p stores the address of the variable 'a'
    q=&b;
    printf("%p ",p+q);
    printf("%d ",*p+*q);
    
    printf("%p ",p-q);
    printf("%d ",*p-*q);
    
    //printf("%p ",p);
    return 0;
    
}
