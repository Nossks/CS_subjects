//for sorted or unsorted array  
#include<stdlib.h>
#include<stdio.h>
void fun(int f){
    if(f==1){
        printf("FOUND...");
    }
    else{
        printf("NOT FOUND...");
    }
}
void found(int size,int element,int arr[]){
    int i,flag=0;
    for(i=0;i<size;i++){
        if(arr[i]==element){
            flag=1;
        }
        else{
            flag=0;
        }
    }
    fun(flag);
}
void main(){
    int arr[100]={1,2,3,4,5,6,7};
    int size=7,element=4;
    printf("The result is\n");
    found(size,element,arr);
}