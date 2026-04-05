#include<stdio.h>
#include<stdlib.h>
void large(int* a,int len){
    int i;
    int largest=a[0];
    int slargest=-1;
    for(i=1;i<len;i++){
        if(a[i]>largest){
            slargest=largest;
            largest=a[i];
        }
        else if(a[i]!=largest && slargest>a[i]){
            slargest=a[i];
        }
    }
    printf("%d,,,%d",largest,slargest);
}
int main(){
    int arr[]={-2,-2,9,9};
    large(arr,4);
}