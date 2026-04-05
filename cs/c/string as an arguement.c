#include<stdio.h>
void fun(char []);  //declare
void main()
{
    char str[53]="Aryan Gairola";
    printf("%s \n",str);
    printf("%d \n",strlen(str));
    fun (str);
}
void fun(char str[])
{
    printf("string is %s",str);
}
