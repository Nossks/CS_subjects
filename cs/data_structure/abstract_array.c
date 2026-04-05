#include<stdio.h>
#include<stdlib.h>
struct array{
    int arry_size;
    int arry_used;
    int *p;
};
void createarray(struct array *a,int arysize,int aryused){
    (*a).arry_size=arysize;
    (*a).arry_used=aryused;
    (*a).p=(int*)malloc(arysize*sizeof(int));
}
void enterval(struct array *b,int c){
    int i;
    for(i=0;i<c;i++){
        scanf("%d",(b+i));
    }
}
void show(struct array *a){
    int i;
    for(i=0;i<3;i++){
        printf("%d\t",*(a+i));
    }
}
void main(){
    struct array marks;
    createarray(&marks,10,3);
    printf("enter array\t");
    enterval(&marks,3);
    printf("the array is\n");
    show(&marks);
}
