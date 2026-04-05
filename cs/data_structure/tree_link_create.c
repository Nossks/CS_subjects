#include<stdio.h>
#include<malloc.h>
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

int main(){
    struct tree *t,*t1,*t2,*t4,*t5,*t3;
    t=create(6);
    t1=create(8);
    t2=create(7);
    t3=create(77);
    t4=create(9);
    t5=create(65);
    t->left=t1;
    t->right=t2;
    t1->left=t3;
    t1->right=t4;
    t2->right=t4;
}