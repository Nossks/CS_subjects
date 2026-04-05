#include<stdio.h>
#include<stdlib.h>
struct list{
    int data;
    struct list * next;
};
    struct list *temp;
void insert(struct list **head,int el){
    struct list * new=(struct list*)malloc(sizeof(struct list));
    new->data=el;
    if(*head==0){
        *head=new;
        temp=new;
    }
    else {
        temp->next=new;
        temp=new;
    }
    new->next=0;
}
int large(struct list **head){
    struct list* h1=*head;
    if(h1==0){
        return -1;
    }
    int large=h1->data;
    while(h1!=0){
        if(large<h1->data){
            large=h1->data;
        }
        h1=h1->next;
    }
    return large;
}
int main(){
    int n=3;
    struct list *head=0;
    for(int i=0;i<n;i++){
        int el;
        printf("enter el to be inserted\t");
        scanf("%d",&el);
        insert(&head,el);
    }
    printf("\nthe largest element is %d",large(&head));
}