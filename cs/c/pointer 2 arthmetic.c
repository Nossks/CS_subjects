#include<stdio.h>
int main()
{
    int a[]={6,2,5,6,8};
    int *ptr;
    ptr=&a[0];
    printf("%d",*ptr);
    ptr=ptr+2;
    printf("%d",*ptr);
    *ptr=2;
    printf("%d\n",*ptr);
    printf("%d",a[2]);
    return 0;
}
