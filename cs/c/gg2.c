//to check sum of any two no. is given or not
#include<stdio.h>
void fun(int[],int,int);   //declare
void main()
{
    int arr[]={0,-1,2,-3,1},x,l;
    printf("enter the no.");
    scanf("%d",&x);
    l=sizeof (arr)/sizeof (arr[0]);
    printf("size is %d\n",l);
    l=9;
    fun(arr,l,x);
}
void fun(int a[],int l,int x)
{
    int i,j,sum=0,f;
    for (i=0;i<l;i++){
        for (j=i+1;j<=l;j++){
            sum=a[i]+a[j];
            if (sum==x){
                f=1;
            }
        }
    }
    if(f=1){
        printf("yes");
    }
}

