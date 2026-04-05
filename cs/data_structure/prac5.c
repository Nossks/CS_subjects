#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next,*prev;
};
struct node*head=0,*temp,*pr=0,*nxt=0;
struct node*creatnode(int dat);
struct node*creatnode(int dat)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=dat;
    newnode->next=0;
    newnode->prev=0;
    return newnode;  
}
int main(){
    int i,n,d; 
  printf("enter the no of node ::");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("\nEnter  the number::");
    scanf("%d",&d);
  if(head==0)
  {
    head=creatnode(d);
    temp=head;
  }
  else{
    temp->next=creatnode(d);
    pr=temp;
    temp=temp->next;
    temp->prev=pr;
  }
  }
  temp=head;
  while(temp!=0){
    nxt=temp->next;
    while(nxt!=0&&temp->data==nxt->data)
    {
        nxt=nxt->next;
    }
    if (nxt != 0) {
            nxt->prev = temp;
        }
    temp->next=nxt;
    temp=temp->next;
  }
  while(head!=0)
  {
    printf("\n%d",head->data);
    head=head->next;
  }
}
p1=head;
p2=p1->next;
while(p1!=0 && p2!=0){
    if(p1==p2){
        p1=p1->prev;
        p1->next=p2;
        p2->prev=p1;
    }
    p1=p1->next;
    p2=p2->next;
}