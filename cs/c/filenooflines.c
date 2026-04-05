#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE*fp;
    fp=fopen("abc.txt","r");
    int i=0;
    char ch;
    while((ch=fgetc(fp))!=EOF){
        if(ch=='\n'){
            i++;
        }
    }
    fclose(fp);
    printf("no. of lines are\t%d ",++i);
}
