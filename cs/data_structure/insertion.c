#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void insertion(int arr[],int size,int capacity,int index,int element){
    int i;
    if(index>capacity)
    {
        printf("not possible");
    }
    else{
    for(i=size;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    }
}
void main(){
    int arr[100]={11,22,33,44,55,66};
    int size=6, capacity=100,element=13,index=1;
    printf("the array is\n");
    display(arr,size);
    printf("the new array is\n");
    insertion(arr,size,capacity,index,element);
    size=size+1;
    display(arr,size);
}