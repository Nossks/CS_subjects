#include<iostream>
using namespace std;
template <class X> void bubblesort(X arr[],int n){
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            if(arr[j]<arr[j+1]){
                X temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    float arr[]={1.2,7.6,8.4,9.8,9,43,6,6.6};
    bubblesort(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" , ";
    }
}