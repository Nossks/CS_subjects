#include<stdio.h>
void sum(int a,int b)
{
    printf("Sum is %d\n",a+b);
}
void sub(int a,int b)
{
    printf("Subtraction is %d\n",a-b);
}
void mul(int a,int b)
{
    printf("Multiply is %d\n",a*b);
}
void dis(void(*ptr)(int a,int b))
{
    ptr(99,88);
}
void main()
{
    dis(&sum);
    dis(&sub);
    dis(&mul);
}
