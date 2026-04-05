#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp1,*fp2;
    fp1=fopen("abc.txt","r");
    fp2=fopen("destiny.txt","w");
    char c;
    while((c=fgetc(fp1))!=EOF){
        fputc(c,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("successfully doone");
}
