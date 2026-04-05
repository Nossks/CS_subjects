#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int * arr;
};
void traversal(struct queue *q){
    for(int i=q->f+1;i<=q->r;i++){
        printf("%d\t",q->arr[i]);
    }
    printf("\n");
}
int isfull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
int isempty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q,int val){      //insertion
    if(isfull(q)){
        printf("queue overflow cant enter %d\n",val);
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}
void dequeue(struct queue *q){      //deletion
    int a;
    if(isempty(q)){
        printf("empty queue\n");
    }
    else{
        q->f++;
        a=q->arr[q->f];
        printf("deleted element is\t%d\n",a);
    }
}
int main(){
    struct queue q;
    q.size=3;
    q.f=-1;
    q.r=-1;
    q.arr=(int *)malloc(q.size*sizeof(int));
    enqueue(&q,13);
    enqueue(&q,88);
    enqueue(&q,8);
    enqueue(&q,99);
    traversal(&q);
    dequeue(&q);
    dequeue(&q);
        dequeue(&q);
    dequeue(&q);
        dequeue(&q);
    dequeue(&q);
    traversal(&q);
}