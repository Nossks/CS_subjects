#include<stdio.h>
#include<malloc.h>
void bubble(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int check=0;
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                check=1;
            }
        }
        if(check=0){
            break;
        }
    } 
}
int main(){
    int arr[]={9,4,5,8,9,0,2,6,3,7};
    bubble(arr,10);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
}