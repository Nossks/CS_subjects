#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int i,n;
    char *p;
    printf("enter no. of blocks or alphabet\t");
    scanf("%d",&n);
    printf("enter the alphabet");
    p=(char*) calloc(n,sizeof(char));
    for(i=0;i<n;i++){
        scanf("%c",(p+i));
    }
    for(i=0;i<n;i++){
        printf("%c\t",*(p+i));
    }
}
