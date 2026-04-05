#include<stdio.h>
#include<stdlib.h>
void main()
{
    char *p;
    int i,n;
    printf("enter no. of alphabet\t");
    scanf("%d",n);
    p=(char*) malloc(n*sizeof(char));
    printf("enter alphabet\n");
    for(i=0;i<n;i++){
        scanf("%c",(p+i));
    }
    printf("entered values are\t");
    for(i=0;i<n;i++){
        printf("%c",*(p+i));
    }
   /* printf("re enter no. of alphabet\t");
    scanf("%d",&n);
    p=(char*)realloc(p,n*sizeof(char));
    for(i=0;i<n;i++){
        scanf("%c",p+i);
    }*/
}
