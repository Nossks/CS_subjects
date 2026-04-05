#include<stdio.h>
#include<stdlib.h>
struct cirque{
    int r;
    int f;
    int size;
    int * arr;
};
int isfull(struct cirque * q){
    if((q->r+1)%q->size==q->f){
        return 1;
    }
    return 0;
}
int isempty(struct cirque * q){
    if(q->f!=q->r){
        return 1;
    }
    return 0;
}
void enque(struct cirque *q,int el){
    if(isfull(q)){
        printf("queue overflow cant enter %d\n",el);
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=el;
    }
}
int deque(struct cirque *q){
    int val;
    if(isempty){
        printf("queue is empty\n");
    }
    else{
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
    }
    return a;
}
int main(){
    struct cirque *q;
    q=(struct cirque*)malloc(sizeof(struct cirque));
    q->size=100;
    q->arr=(int*)malloc(q->size*sizeof(int));
    q->r=0;
    q->f=-0;
    enque(q,12);
    enque(q,3);
    enque(q,77);
}