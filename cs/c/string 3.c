#include<stdio.h>
int main()
{
    int a=0,count=0,b=0;
    char str[33];
    printf("enter string  ");
    scanf("%s",&str);
    a=strlen(str);
    printf("%d \n",a);
    while(str[b]!='\0'){
        count=count+1;
        b++;
    }
    printf("%d",count);
}
