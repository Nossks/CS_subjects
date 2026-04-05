#include<stdio.h>
#include<malloc.h>
struct stack{
    char *s;
    int size;
    int top;
};
struct stack *stk;
int isfull(){
    if(stk->top==stk->size-1){
        return 1;
    }
    return 0;
}
void push(char c){
    if(isfull()){
        printf("stack overloaded");
        exit(0);
    }
    else{
        stk->top++;
        stk->s[stk->top]=c;
    }
}
int isempty(void){
    if(stk->top==-1){
        return 1;
    }
    return 0;
}
void pop(void){
    if(isempty()){
        printf("stack underflow");
        exit(0);
    }
    else{
        printf("%c",stk->s[stk->top--]);
    }
}
int main(){
    stk=(struct stack *)malloc(sizeof(struct stack));
stk->s=(char *)malloc(10*sizeof(char));
stk->size=10;
stk->top=-1;
    char ch[]="aryan gairola 1";
    for(int i=0;i<15;i++){
        push(ch[i]);
    }
    for(int i=0;i<15;i++){
        pop();
    }
}