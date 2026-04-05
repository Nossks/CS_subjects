#include<stdio.h>
int * fun(int []);   //declare
void main()
{
    int *a;
    int arr[]={1,2,3,4,5};
    a=fun(arr);
    printf("%d",*a);
}
int* fun(int a[])
{
    a=a+3;
    return a;
}
