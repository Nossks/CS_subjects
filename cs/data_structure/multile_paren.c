#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    char *arr;
};
void push(char c,struct stack*s){
    s->arr[s->top+1]=c;
    s->top++;
}
void pop(struct stack *s){
    s->top--;
}
int isempty(struct stack*s){
    if(s->top==-1){
        return 1;
    }
    return 0;
}
int paren(char*str,int n,struct stack *s){
    for(int i=0;i<n;i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            push(str[i],s);
        }
        if(str[i]==')' || str[i]=='}' || str[i]==']'){
            if(isempty){
                return -1;             //unmatched paren
            }
            if(s->arr[s->top]==str[i]){
                pop(s);
            }
        }
    }
    if(isempty(s)){
        return 1;               //matched paren
    }
        return -1;              //unmatched paren               
    }
int main(){
    struct stack *s;
    s=(struct stack*)malloc(sizeof(struct stack));
    s->arr=(char*)malloc(100*sizeof(char));
    s->top=-1;
    char c[23];
    printf("enter exp.");
    scanf("%s",&c);
    int n=sizeof(c)/sizeof(char);
    int i=paren(c,n,s);
    printf("%d",i);
}