#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp;
    fp=NULL;
    fp=fopen("abc.txt","r");
    if (fp==NULL){
        printf("error");
    }
    char ch;
   /* while(!feof(fp)){
        fgets(ch,5,fp);
        printf("%s",ch);      //(string_name,size,filepointer)
    }*/
    while(!feof(fp)){
           ch=fgetc(fp);
           printf("%c",ch);
    }
    fclose(fp);
}
