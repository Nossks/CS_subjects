#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isfull(struct stack* p){
    if(p->top==p->size-1){
        return 1;
    }
    return 0;
}
int isempty(struct stack*p){
    if(p->top==-1){
        return 1;
    }
    else{
        return 0; 
    }
}
void push(struct stack *p,int element){
    if(isfull(p)){
        printf("overflow cant enter %d",element);
    }
    else{
        p->arr[p->top+1]=element;
        p->top++;
    }
}
void traverse(struct stack *p){
    int i;
    for(i=0;i<=p->top;i++){
        printf("%d\t",p->arr[i]);
    }
}
int pop(struct stack *p){
    int i;
    if(isempty(p)){
        printf("stack underflow");
        return -1;
    }
    else{
        i=p->arr[p->top];
        p->top--;
        return i;
    }
}
int peek(struct stack *p,int i){
    int val;
    val=p->arr[p->top -i+1];
    return val;
}
int main()
{
    struct stack *p;
    p=(struct stack *)malloc(sizeof(struct stack));
    p->size=10;
    p->top=-1;
    p->arr=(int *)malloc(p->size*sizeof(int));
    //printf("%d\n",isfull(p));
    //printf("%d\n",isempty(p));
    push(p,99);
    push(p,88);
    push(p,77);
    push(p,66);
    push(p,33);
    push(p,3);
    push(p,32);
    push(p,3643);
    push(p,55);
    for(int j=1;j<=p->top+1;j++){
        printf("index %d value is %d\n",j,peek(p,j));
    }
}