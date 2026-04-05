#include<stdio.h>
int partition(int arr[],int lb,int ub){
    int pivot=arr[lb];
    int start=lb;
    int end=ub;
    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }
    arr[lb]=arr[end];
    arr[end]=pivot; 
    return end;
}
void quick(int arr[],int lb,int ub){
    if(lb>=ub){return ;}
    int loc=partition(arr,lb,ub);
    quick(arr,lb,loc-1);
    quick(arr,loc+1,ub);
}
int main(){
   int arr[]={33,65,87,9,0,-9,33,21,7,7};
    int size=10;
    quick(arr,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}