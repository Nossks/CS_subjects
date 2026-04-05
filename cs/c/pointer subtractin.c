#include<stdio.h>
int main()
{
    int a[4]={50,1,-1,10,11};
    int*p,*q;
    p=&a[0];
    q=&a[4];
    int d;
    d=q-p;
    printf("%d\n",d);
    *q=25;
    printf("%d\n",a[4]);//can accessed nby pointer also
    d=p-q;
    printf("%Nd\n",d);// why d why
    *p=27;
    printf("%d\n",a[0]);
    q=q-3;
    printf("%d\n",*q);
    p=p+3;
    printf("%d\n",*p);
    d=p-q;
    printf("%d",d);
}
