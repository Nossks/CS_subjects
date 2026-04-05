#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m;
    printf("enter row and column respectively");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    printf("enter array");
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
    }
    printf("\n");
    }
        for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",arr[i][j]);
    }
    printf("\n");
    }
    printf("\n");
    int size=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr[i][j]!=0){
                size=size+1;
            }
    }
    }
    int k;
    printf("\n%d\n",size);
    int SM[3][size];
    for(i=0;i<n;i++){
            k=0;
        for(j=0;j<m;j++){
            if(arr[i][j]!=0 && i==0){
                SM[0][k]=i;
            }
            else if(arr[i][j]!=0 && i==1){
                SM[1][k]=j;
            }
            else{
                SM[2][k]=arr[i][j];
            }
            k++;
        }
    }
    printf("sparse maty.\n");
    for(i=0;i<3;i++){
        for(j=0;j<size;j++){
            printf("%d\t",SM[i][j]);
        }
        printf("\n");
    }
}
