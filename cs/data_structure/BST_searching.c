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
bool srchbst(struct tree *root,int key){
    if(root==0){
        return false;
    }
    else if(root->data==key){
        return true;
    }
    else if(root->data<key){
        return srchbst(root->right,key);
    }
    else{
        return srchbst(root->left,key);
    }
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
    printf("%s",srchbst(t,65) ? "true":"false");
}