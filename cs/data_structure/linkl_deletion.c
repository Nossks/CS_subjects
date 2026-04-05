#include<stdio.h>
#include<stdlib.h>
struct node {
    char data;
    struct node * nxt;
};
void display(struct node *head){
    while(head!=NULL){
        printf("%c\t",(*head).data);
        head=(*head).nxt;
    }
}
struct node *del_beg(struct node * head){
    struct node*p=head;
    head=(*head).nxt;
    free(p);
    return head;
}
struct node *del_bet(struct node *head,int index){
    struct node * p=head;
    int i;
    for(i=0;i<index-1;i++){
        p=(*p).nxt;
    }
    struct node *q=(*p).nxt;
    (*p).nxt=(*q).nxt;
    free(q);
    return head;
}
struct node * del_lst(struct node*p){
    struct node*head=p;
    struct node *q;
        q=(*p).nxt;
    while((*q).nxt!=NULL){
        p=(*p).nxt;
        q=(*q).nxt;
    }
    (*p).nxt=NULL;
    return head;
}
void main(){
    struct node*p1,*p2,*p3,*p4,*p5;
    p1=(struct node*)malloc(sizeof(struct node));
    p2=(struct node*)malloc(sizeof(struct node));
    p3=(struct node*)malloc(sizeof(struct node));
    p4=(struct node*)malloc(sizeof(struct node));
    p5=(struct node*)malloc(sizeof(struct node));
    (*p1).data='A';
    (*p2).data='R';
    (*p3).data='Y';
    (*p4).data='A';
    (*p5).data='N';
    (*p1).nxt=p2;
    (*p2).nxt=p3;
    (*p3).nxt=p4;
    (*p4).nxt=p5;
    (*p5).nxt=NULL;
    printf("before deletion\n");
    display(p1);
    printf("\nafter deletion\n");
    //p1=del_beg(p1);
   //p1=del_bet(p1,4);
    //p1=del_lst(p1);
    p1=del_
    display(p1);
}