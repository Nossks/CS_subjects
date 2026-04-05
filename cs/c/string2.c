#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,i=0;
    char str[13];
    gets(str);
    //count=strlen(str);
    //printf("%d",count);
    while(str[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);
}
