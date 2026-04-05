#include<stdio.h>
//with arguement and with return type
int fun(int a);  //declaration
void main()
{
    int x,d;
    printf("enter a no. to find whether it is even or odd:  ");
    scanf("%d",&d);
    x=fun(d);
    if (x==1){
        printf("even");
    }
    else{
        printf("odd");
    }
}
int fun(int d)  //definition
{
    int flag=0;
    if(d%2==0){
        flag=1;
    }
    else{
        flag=0;
    }
    return flag;
}
