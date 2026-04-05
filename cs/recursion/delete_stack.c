#include<stdio.h>
int top=4;      //0,1,2..
void del(int stack[],int k){
    if(top==k){
        top--;
        return ;
    }
    int val=stack[top--];
    del(stack,k);
    printf("%d\n",top);
    stack[++top]=val;
}
int main(){
    int stack[]={7,5,3,-8,1};
    int k=2;        //0,1,2..
    del(stack,k);
    for(int i=0;i<4;i++){
        printf("%d ",stack[i]);
    }
}