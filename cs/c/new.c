#include<stdio.h>
 #include<stdlib.h>
struct myarray{
    int arry_size;
    int arry_used;
    int *p;
};
void create(struct myarrary *a,int arysize,int aryused){
    (*a).arry_size=arysize;
    (*a).arry_used=aryused;
    (*a).p=(int*)malloc(arysize*sizeof(int));
}
void show(struct myarray *b,int aryused){
    int i;
    for(i=0;i<aryused;i++){
        printf("%d",*(b+i));
    }
}
void enterval(struct myarray *c){
    int i;
    for(i=0;i<arysize;i++){
        scanf("%d",(c+i));
    }
}
int main(){
    struct myarray marks;
    create(&marks,10,3);
    printf("enter array\n");
    enterval(&marks);
    printf("the array is\t");
    show(&marks,3);
    return 0;
}
