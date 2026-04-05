#include <stdio.h>
#include <stdlib.h>
struct list
{
    /// @brief 
    int exp;
    int cof;
    struct list *nxt;
};
struct list *h1, *h2,*h3;
struct list *create(void)
{
    struct list *h = 0, *temp;
    int choice = 1;
    while (choice)
    {
        struct list *new = (struct list *)malloc(sizeof(struct list));
        printf("enter coffeicent,exponenet respectively");
        scanf("%d %d", &new->cof, &new->exp);
        if (h == 0)
        {
            h = new;
        }
        else
        {
            temp->nxt = new;
        }
        temp = new;
        new->nxt = 0;
        printf("enetr1 for more");
        scanf("%d", &choice);
    }
    return h;
}
struct list * fun(void){
    struct list *p1,*p2,*p3,*temp;
    p1=h1;
    p2=h2;
    p3=0;
    printf("4");
    while(p1!=0 && p2!=0){
        struct list *new = (struct list *)malloc(sizeof(struct list));
        if(p3==0){
            p3=new;
            temp=new;
        }
        if(p1->exp>p2->exp){
            new->exp=p1->exp;
            new->cof=p1->cof;
            p1=p1->nxt;
        }
        if(p1->exp<p2->exp){
            new->cof=p2->cof;
            new->exp=p2->exp;
            p2=p2->nxt;
        }
        if(p1->exp==p2->exp){
            new->cof=p1->cof+p2->cof;
            new->exp=p1->exp+p2->exp;
            p1=p1->nxt;
            p2=p2->nxt;
        }
        temp->nxt=new;
        new->nxt=0;
        temp=new;
    }
    if(p1!=0){
        temp->nxt=p1;
    }
    if(p2!=0){
        temp->nxt=p2;
    }
    return p3;
}
void display(void)
{
    printf("1");
    struct list *new;
    new = h3;
    while (new != 0)
    {
        printf("exp= %d,cof= %d\n", new->exp, new->cof);
        new = new->nxt;
    }
}
int main()
{
    printf("enter ele of first exp");
    h1 = create();
    h2=create();
    h3=fun();
        printf("2");
    display();
}