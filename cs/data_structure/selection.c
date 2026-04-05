#include<stdio.h>
void selection(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int key=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[key]){
                key=j;
            }
        }
        if(key!=i){
        int temp=arr[i];
        arr[i]=arr[key];
        arr[key]=temp;}
    }

}
int main(){
    int arr []={9,4,5,8,9,0,2,6,3,7};
    int size=10;
    selection(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}