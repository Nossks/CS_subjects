#include<stdio.h>
void create(int a[],int b){
    int i;
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
}
void merge(int arr[],int ar[],int n,int m){
    int f[n+m];
    int i;
    for(i=0;i<n;i++){
        f[i]=arr[i];
    }
    for(i=0;i<m;i++){
        f[n+i]=ar[i];
    }
    printf("the array is");
    for(i=00;i<n+m;i++){
        printf("%d\t",f[i]);
    }
    printf("the sorted array is\n");
    int temp,j;
    for(i=0;i<n+m;i++){
        temp=f[i];
        for(j=i+1;j<n+m;j++){
            if(f[i]>f[j]){
                f[i]=f[j];
                f[j]=temp;
            }
        }
    }
   for(i=00;i<n+m;i++){
        printf("%d",f[i]);
    }
}
void main(){
    int n,m;
    printf("enetr no. of elements for both array");
    scanf("%d %d",&n,&m);
    int arr[n],ar[m];
    printf("enter array");
    create(arr,n);
    printf("enter another array");
    create(ar,m);
    merge(arr,ar,n,m);
}
