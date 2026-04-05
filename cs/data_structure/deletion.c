#include<stdlib.h>
#include<stdio.h>
void display(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
void delete(int index,int size,int arr[]){
    int i;
    for(i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
}
void main(){
   int arr[100]={11,13,22,33,44,55,66};
   int size=7,index=4 ;
   delete(index,size,arr);
   size--;
   display(arr,size);
}