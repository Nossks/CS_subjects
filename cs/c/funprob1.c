#include<stdio.h>
void fun(int [],int);   //declare
int main()
{
   int arr[]={1,2,3,4,5};
   int l,i;
   l=sizeof(arr)/sizeof(arr[1]);
   printf("size of array %d  \n",l);
   printf("actual array is>>>>\n");
   for(i=0;i<l;i++){
    printf("%d\t",arr[i]);
   }
   printf("\n");
   fun (arr,l);
}
void fun(int a[],int l)
{
    int i,s,b[l];
   for(i=0;i<l;i++){
    s=a[i]*a[i];
    b[i]=s;
   }
   printf("resulting array is>>>>\n");
   for(i=0;i<l;i++){
    printf("%d\t",b[i]);
   }
}
