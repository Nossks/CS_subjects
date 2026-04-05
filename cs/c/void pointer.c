#include<stdio.h>
int main()
{
    char a='k';
    float f=65.65;
    int i=33;
    void *ptr;
    ptr=&a;
    printf("%c\n",*(char*)ptr);
    ptr=&f;
    printf("%f\n",*(float*)ptr);
    ptr=&i;
    printf("%d\n",*(int*)ptr);

}
