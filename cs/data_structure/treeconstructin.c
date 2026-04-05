#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left ,*right;
};
 struct node*tree(void);
 struct node*tree(void)
 {
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the number -1 for no node::");
    int x;
    scanf("%d",&x);
     if(x==-1)
     {
        return 0;
     }
      newnode->data=x;
      printf("\n add a node left side of %d:",x);
      newnode->left=tree();
      printf("\n add a node right  side of %d:",x);
      newnode->right=tree();
      return newnode;
 }
 void preorder(struct node*);
 void preorder(struct node*root)
 {
     if(root==0)
     {
        return;
     }
     printf("%d->",root->data);
     preorder(root->left);
     preorder(root->right);
 }
void postorder(struct node*);
void postorder(struct node*root)
{
 if(root==0)
 {
    return ;
}
 postorder(root->left);
 postorder(root->right);
printf("%d->",root->data);
}
int main(){
int i,n;
struct node*root=tree();
// try to print preorder;
//preorder(root);
postorder(root);
}