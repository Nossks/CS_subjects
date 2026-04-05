#include<stdio.h>
void main()
{
    int n,m;
    printf("enter no. of rows and column");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int i,j;
    printf("enter the array");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int* ptr; 
    ptr=arr;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",*ptr);
            ptr++;
        }
        printf("\n");
    }
}