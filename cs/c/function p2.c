#include<stdio.h>
void sub(void);  //declaration of function
int main()
{
    printf("hello  \n");
    sub();       //function calling
}
void sub()
{
    int a,b,s;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    s=a-b;
    printf("%d",s);
}
