#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp=NULL;
    fp=fopen("abc.txt","w");
    if(fp==NULL){
        printf("error");
    }
    char str[44];
    int a;
    float f;
    char c;
    printf("enter integer,flaoat,character,\n ");
    scanf("%d %f %c %s",&a,&f,&c,str);
    fputs(str,fp);
    fprintf(fp,"%d %f",a,f);
    fclose(fp);
}
