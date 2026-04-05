#include<stdio.h>
struct student{
char name[33];
int roll;
float marks;
};
struct student s1,s2;
int main()
{
    struct student *ptr=&s1;
    s2.name[33]={"is"};    /////////errrrrrrrorrrrrrrrrrrrrrrrrrrrr
    s2.roll=61;
    s2.marks=44.44;
    printf("enter info of a student\n");
   // scanf("%s%d%f",&(*ptr).name,&(*ptr).roll,&(*ptr).marks);
   // printf("%s\t%d\t%f\n",(*ptr).name,(*ptr).roll,(*ptr).marks);
    printf("%s\t%d\t%f",s2.name,s2.roll,s2.marks);
    return 0;
}
