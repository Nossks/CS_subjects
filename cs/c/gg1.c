#include<stdio.h>
void main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int *ptr,x;
    int i;
    printf("element you want to find");
    scanf("%d",&x);
    for (i=0;i<=10;i++)
    {
        if (a[i]==x){
            printf("yes it is");
        }
    }
}
