#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int *arr;
};
void traversal(struct stack *s){
    int i;
    for(i=0;i<s->size;i++){
        scanf("%d",&s->arr[i]);
        (s->top)++;
    }
}
void display(struct stack *s){
    int i;
    printf("the stack is\t");
    for(i=0;i<s->size;i++){
        printf("%d\t",s->arr[i]);
    }
}
void s_top(struct stack*s){
    printf("the top is %d\n",s->arr[s->top]);
}
void s_bot(struct stack*s){
    printf("the bottom is %d",s->arr[0]);
}
int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    printf("enetr size");
    scanf("%d",& s->size);
    s->arr=(int*)malloc(s->size*sizeof(int));
    traversal(s);
    display(s);
    printf("\n");
    s_top(s);
    s_bot(s);
}