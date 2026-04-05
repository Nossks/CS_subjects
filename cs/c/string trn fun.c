#include<stdio.h>
char* fun();   //declare
void main()
{
    const char *i;
    printf("string is :\t");
    i=fun();
   // i[0]='A';      //can be done by static  and char str[];;
    printf("%s",i);
}
 char* fun()
{

    const char *str="aryan gairola";
    return str;
}
