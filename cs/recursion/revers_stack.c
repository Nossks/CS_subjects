#include<stdio.h>
int top=4;      //0,1,2,3...
void insert(char stack[],char temp){
    if(top<0){
        stack[++top]=temp;
        return ;
    }
    char val=stack[top--];
    insert(stack,temp);
    stack[++top]=val;
}
void rev(char stack[]){
    if(top<=0){
        return ;
    }
    char temp=stack[top--];
    rev(stack);
    insert(stack,temp);
}
int main(){
    char stack[]="skucf";
    rev(stack);
    printf("%s",stack);
}