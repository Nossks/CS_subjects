#include<stdio.h>
void ch( char a);    //function declaration
int main()
{
    int i=8;
    printf("enter no. of time you wanna to print hello  \n  %d",i);
    ch(5);    //function calling
}
void ch(char x)    //funtion definition
{
    int i;
    for(i=1;i<=5;i++){
        printf("HELLO \t");
    }
}
