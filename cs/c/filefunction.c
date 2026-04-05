#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    fp=NULL;
    fp=fopen("abc.txt","r");
    if(fp==NULL){
        printf("error");
        exit(1);
    }
    fseek(fp,1,SEEK_SET);
    char ch;
    fscanf(fp,"%c",&ch);
    printf("%c\n",ch);
    ftell(fp);
    printf("%d",ftell(fp));
    fclose(fp);
}
