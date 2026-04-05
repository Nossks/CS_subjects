#include<stdio.h>
int binsearch(int arr[],int size,int element){
    int i,low=0,mid,high=size-1;
    while (low<=high){
    mid =(low+high)/2;
    if(element==arr[mid]){
        return mid;
    }
    if(element<mid){
        high=mid-1;
    }
    else{
        low=mid+1;
    }
}
}
void main(){
    int arr[100]={9,8,7,6,5,4,3,2,1,0};
    int size=sizeof(arr)/sizeof(int);
    int element=9,i;
    i=binsearch(arr,size,element);
    printf("the element %d is found at index %d",element,i);
}