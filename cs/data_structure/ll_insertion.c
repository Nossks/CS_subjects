#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * nxt;
};
struct node traversal(struct node *head){
    printf("Element :\t");
    while(head!=NULL){
        printf("%d\t",(*head).data);
        head=(*head).nxt;    //logical
    }
}
struct node *insert_beg(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    (*ptr).data=data;
    (*ptr).nxt=head;
    return ptr;
}
struct node *insert_bet(struct node *head,int index,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i!=index-1){
        p=(*p).nxt;       //logical
        i++;
    }
    (*ptr).data=data;
    (*ptr).nxt=(*p).nxt;
    (*p).nxt=ptr;
    return head;
}
struct node *insert_end(struct node *head, int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    (*ptr).data=data;
    struct node *p=head;
    while((*p).nxt!=NULL){
        p=(*p).nxt;
    }
    (*p).nxt=ptr;
    (*ptr).nxt=NULL;
    return head;
}
void main(){
    struct node *head,*p1,*p2,*p3;
    
    head=(struct node*)malloc(sizeof(struct node));
    p1=(struct node*)malloc(sizeof(struct node));
    p2=(struct node*)malloc(sizeof(struct node));
    p3=(struct node*)malloc(sizeof(struct node));
    (*head).nxt=p1;
    (*head).data=33;
    (*p1).data=66;
    (*p1).nxt=p2;
    (*p2).data=99;
    (*p2).nxt=p3;
    (*p3).data=132;
    (*p3).nxt=NULL;
    printf("before insertion\t");
    traversal(head);
    //head=insert_beg(head,11);
    //head=insert_bet(head,1,88);
    head=insert_end(head,8008);
    printf("\nafter insertion\t");
    traversal(head);
}