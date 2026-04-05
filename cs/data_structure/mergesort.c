#include<stdio.h>
void merge(int arr[],int lb,int mid,int ub){
    int a[100];
    int i=lb;
    int j=mid+1;
    int k=lb;
    while(i<=mid && j<=ub){
        if(arr[i]<arr[j]){
            a[k]=arr[i];
            i++;
        }
        else{
            a[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        a[k]=arr[i];
        k++;
        i++;
    }
    while(j<=ub){
        a[k]=arr[j];
        k++;
        j++;
    }
    for(i=0;i<k;i++){
        arr[i]=a[i];
    }
}
void MS(int arr[],int lb,int ub){
    if(lb>=ub){
        return ;
    }
    int mid=(lb+ub)/2;
    MS(arr,lb,mid);
    MS(arr,mid+1,ub);
    merge(arr,lb,mid,ub);
}
int main(){
    int arr[]={33,65,87,97,0,-9,33,21,-7,7};
    int size=10;
    MS(arr,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}