#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *nxt;
};
void display(struct node*head ){
    while(head!=0){
        printf("%d\t",(*head).data);
        (head)=(*head).nxt;
    }
    printf("\n%d",head);            //standing at null
}
void main(){
    struct node *first;
    struct node *second,*third,*fourth,*x;
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    x=(struct node*)malloc(sizeof(struct node));
     (*first).data=22;
     (*first).nxt=second;
     (*second).data=13;
     (*second).nxt=third;
     (*third).data=45;
     (*third).nxt=fourth;
     (*fourth).data=88;
     (*fourth).nxt=NULL;
    (*fourth).nxt=x;
    x->data=33;
    x->nxt=0;
    display(first);
}