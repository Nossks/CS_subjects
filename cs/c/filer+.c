#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *fp;
    fp=fopen("abc.txt","r+");
    if (fp==NULL){
        printf("no file exist");
    }
    printf("write what you want to modify\t");
    char c[66];
    gets(c);
    fprintf(fp,"%s",c);
    char str;
    rewind(fp);
    printf("\n");
    while(!feof(fp)){
        str=fgetc(fp);
        printf("%c",str);
    }
    fclose(fp);
}
