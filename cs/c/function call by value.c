#include<stdio.h>
void fun(int a,int b);
void main()
{
    int p=3,q=7;
    fun(p,q);
    printf("end \n");
    printf("%d,%d",p,q);
}
void fun(int p,int q)
{
    p=66,q=99;
    printf("%d,%d \n",p,q);
}
