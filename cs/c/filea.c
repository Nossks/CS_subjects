#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    fp=fopen("abc.txt","a");
    if(fp==NULL){
        printf("error");
    }
    printf("enter what you want to append\n");
    char str[44];
    gets(str);
    fprintf(fp,"\n%s",str);
    printf("successfully appended");
    fclose;
}
