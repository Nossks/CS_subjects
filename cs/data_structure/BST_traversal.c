#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
struct tree{
    struct tree * left;
    int data;
    struct tree *right;
}; 
struct tree  *create (int val){
    struct tree * n=(struct tree *)malloc(sizeof(struct tree));
    n->data=val;
    n->left=n->right=0;
    return n;
}
bool isbst(struct tree *root){
t    if(root==0){
        return 1;
    }
    static struct tree *prev=0;
    if(!isbst(root->left)){
        return 0;
    }
    if(prev!=0 && prev->data<=root->data){
        return 0;
    }
    prev=root;
    return isbst(root->right);
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
    printf("%s",isbst(t) ? "true":"false");
}