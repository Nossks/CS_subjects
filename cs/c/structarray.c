#include<stdio.h>
struct employ{
    int empid;
    char name[22];
    float salary;
};
int main()
{
    int i;
    struct employ sa[3];
    printf("enter info of 3 employ");
    for(i=0;i<3;i++){
        scanf("%d %s %f",&sa[i].empid,&sa[i].name,&sa[i].salary);
    }
    for(i=0;i<3;i++){
        printf("%d %s %f\n",sa[i].empid,sa[i].name,sa[i].salary);
    }
    return 0;
}
