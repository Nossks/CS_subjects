#include<stdio.h>
#include<stdlib.h>
struct tree {
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree * create(void){
    struct tree * nn=(struct tree *)malloc(sizeof(struct tree));
    int x;
    printf("enter(-1 for no more)\n");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    nn->data=x;
    printf("enetr left child of %d\n",x);
    nn->left=create();
    printf("enter right child of %d\n",x);
    nn->right=create();
    return nn;
}
void inorder(struct tree *root){
    if(root==0){
        return ;
    }
    inorder (root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
int main(){
    struct tree *root=0;
    root=create();
    inorder(root);
}