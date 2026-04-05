#include<stdio.h>
int main()
{
    char str[]="welcome to the world say hi";
    char *ptr;
    ptr=&str[0];
    printf("%c\n",*ptr);
    char s="a";
    char *p;
    p=&s;
    printf("%c",(*p)+32);
}
