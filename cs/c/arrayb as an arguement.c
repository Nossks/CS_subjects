#include<stdio.h>
void fun(int arr[]);  //declare
void fun2(int arr3[]);
int main()
{
    int arr[]={1,22,3};
    printf("array is : \n");
    fun(arr);
    printf("\n");
    printf("average is \t");
    fun2(arr);
}
void fun(int arr[])
{
    int i;
    for(i=0;i<=2;i++){
        printf("%d\t",arr[i]);
    }
}
void fun2(int a[])
{
    int sum=0;
    int avg;
    int i=0;
    while(i<=2){
        sum=sum+a[i];
        i++;
    }
    avg=sum/3;
    printf("%d",avg);
}
