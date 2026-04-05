#include<stdio.h>
void fun(int *,int *);   //func. declaration
int main()
{
    int a=3,b=7;
    printf("%d,%d \n",a,b);
    fun(&a,&b);   //func. calling
    printf("end \n");
    printf("%d,%d",a,b);
}
void fun(int *ptr1,int *ptr2)    //func. definition
{
    *ptr1=7,*ptr2=3;
    printf("%d,%d",*ptr1,*ptr2);
}
