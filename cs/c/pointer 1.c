#include<stdio.h>
int main()
{
    //double pointer
    int a=99;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("value of a :  \n %d",***r);
    ***r=33;
    printf("%d",a);
}
