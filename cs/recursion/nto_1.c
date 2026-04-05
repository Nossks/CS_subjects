#include<stdio.h>
void print(int n){
    if(n==1){
        printf("1 ") ;
        return ;
    }
    printf("%d ",n);
    print(n-1);
}
int main(){
    int n=6;
    print(n);
}