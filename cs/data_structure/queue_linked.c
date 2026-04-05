#include<stdio.h>
#include<stdlib.h>
struct node{            //linked list creaton
    int data;
    struct node * next;
};
struct node *f;
struct node *r;
void traversal(){
    struct node *ptr=f;
    while(ptr!=0){
        printf("element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
void enqueue(int val){
    struct node * n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL){
        printf("queue is full\n");
    }
    else{
        n->data=val;
        n->next=0;
        if(f==0 && r==0){
            f=n;
            r=n;
        }
        else{
            r->next=n;      //wint 
            r=n;
        }
    }
}
int dequeue(){
    struct node *n=f;
    int val=-1;
    if(r==0 && f==0){
        printf("queue is empty\n");
    }
    else{
        val=n->data;
        f=f->next;           //wint also
        free(n);
        if(f==0){
            r=0;
        }
    }
    return val;
}
int main(){
    f=r=NULL;
    traversal();
    enqueue(22);
    enqueue(56);
    enqueue(65);
    enqueue(71);
    enqueue(77);
    enqueue(69);
    traversal();
    printf("dequeued ele is %d\n",dequeue());
    printf("dequeued ele is %d\n",dequeue());
    enqueue(79);
    traversal();
}
