#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,*ptr;
    printf("enter no. of values you want to enter\n");
    scanf("%d",&n);
    ptr=(int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    int sum=0;
    for(i=0;i<n;i++){
        sum=sum+(*(ptr+i));
    }
    printf("the sum of above entered values are\t %d\n",sum);
    printf("your entered digits are\n");
    for(i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
    }
    free(ptr);
}
