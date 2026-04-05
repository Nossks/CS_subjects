#include<stdio.h>
int main()
{
    int a,i,s;
    printf("enter the number  \n");
    scanf("%d",&a);
    if(a==2){
        printf("A prime number");
    }
    else if(a%2==0 || a%3==0 || a==1){
        printf("not a prime number");
        }
    else{
        printf("prime number");
    }
}
