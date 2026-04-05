#include<stdio.h>
void print(int n){
    if(n==1){
        printf("1 ");
        return ;
    }
    print(n-1);
    printf("%d ",n);
}
int main(){
    int n=9;
    print(n);
}