#include<stdio.h>
void add(int a,int b)
{
    printf(" addition is %d",b+a);
}
void sub(int a,int b)
{
    printf("Subtraction is %d\n",a-b);
}
void mul(int a,int b)
{
    printf("Multiply is %d\n",a*b);
}
void div(int a,int b)
{
    printf("division is %d",a/b);
}
void mod(int a,int b)
{
    printf("modulus is %d",a%b);
}
void main()
{
    int ch;
    printf("chooose>>>\n0 for add\n1 for sub\n2 for mul\n3 for div.\n4 for mod\n");
    printf("enter choice");
    scanf("%d",&ch);
    void(*fptr[])(int ,int)={add,sub,mul,div,mod};
    printf("enter the two number");
    int a,b;
    scanf("%d%d",&a,&b);
    (*fptr[ch])(a,b);
}
