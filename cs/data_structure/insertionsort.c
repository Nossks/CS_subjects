#include<stdio.h>
void insertion (int arr[],int size){
    int i,j;
    for(i=1;i<size;i++){
        j=i-1;
        int key=arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[]={9,4,5,8,9,0,2,6,3,7};
    insertion(arr,10);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
}