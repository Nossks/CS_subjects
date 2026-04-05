#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;     //indexx.....
    int *arr;
};
int push(struct stack *p,int element,int n){
    p->arr[(p->top)+1]=element;
    n++;
    return n;
}
int main(){
    struct stack *p=(struct stack*)malloc(sizeof(struct stack));
    (*p).top=-1;
    int n;
    printf("enter no. of element in stack");
    scanf("%d",&n);
    (*p).arr=(int *)malloc(((*p).size)*sizeof(int));
    int i;
    //printf("%d",(*p).size);
    printf("enter stack");
    for(i=0;i<n;i++){
        scanf("%d",&p->arr[i]);
        p->top++;
    }
    int element;
    printf("enter element to push in stack");
    scanf("%d",&element);
    n=push(p,element,n);
    printf("the new stack is\n");
    for(i=0;i<n;i++){
        printf("%d\t",p->arr[i]);
    }
}