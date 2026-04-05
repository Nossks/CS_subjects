#include<stdio.h>
int main()
{
    char str[30];
    gets(str);
    //scanf("%s",str);
    printf("%s \n",&str[4]);
    puts(str);
    puts(str);
}
