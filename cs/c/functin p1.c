#include<stdio.h>
void sum()
{
    int a,b,sum;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("the sum is %d\n",sum);
}
void main()
{
    sum();
    sum();
}
