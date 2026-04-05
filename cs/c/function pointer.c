#include<stdio.h>
int sub(int ,int);   //declare
void main()
{
    int s=0;
    int (*ptr)(int ,int)=&sub;
    s=(*ptr)(55,44);
    printf("%d",s);
}
int sub(int a,int b)
{
    int s;
    s=a-b;
    return s;
}
