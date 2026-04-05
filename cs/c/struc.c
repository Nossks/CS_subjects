#include<stdio.h>
struct student{
    char name[14];
    int rollno;
    float marks;
};
void main()
{
    struct student s1={"aryan",16,12};
    struct student s2;
    printf("info of s1\n");
    printf("%s\t%d\t%f\n",s1.name,s1.rollno,s1.marks);
    printf("info of s2\n");
    scanf("%s%d%f",&s2.name,&s2.rollno,&s2.marks);
    printf("%s\t%d\t%f\n",s2.name,s2.rollno,s2.marks);
}
