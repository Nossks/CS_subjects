#include<stdio.h>
#include<stdlib.h>
struct tree{
    struct tree *left;
    int val;
    struct tree *right;
};
struct tree  *create (int el){
    struct tree * n=(struct tree *)malloc(sizeof(struct tree));
    n->val=el;
    n->left=n->right=0;
    return n;
}
struct tree * insertion(struct tree *groot,int data){
    struct tree *prev,*root=groot;
    while(root!=0){
        prev=root;
        if(root->val==data){
            printf("not possible to insert %d\n",data);
            return groot;
        }
        else if(root->val<data){
            root=root->right;
        }
        else{
            root=root->left;
        }
    }
    struct tree *new=create(data);
    if(prev->val<data){
        prev->right=new;
    }
    else{
        prev->left=new;
    }
    return groot;
}
void intraversal(struct tree *root){
    if(root==0){
        return ;
    }
    intraversal(root->left);
    printf("%d ",root->val);
    intraversal(root->right);
}
int main(){
    struct tree *t,*t1,*t2,*t4,*t5,*t3;
    t=create(9);
    t1=create(8);
    t2=create(11);
    t3=create(7);
    t4=create(10);
    t5=create(65);
    t->left=t1;
    t->right=t2;
    t1->left=t3;
    t1->right=t4;
    t2->right=t5;
    t=insertion(t,5);
    printf("the BST is \n");
    intraversal(t);
}