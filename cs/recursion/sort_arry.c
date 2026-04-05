#include <stdio.h>
void insert(int *arr, int n, int val)
{
    if (n == 0 || arr[n - 1] <= val)
    {
        arr[n] = val;
        return ;
    }
    int temp=arr[--n];
   // int temp = arr[n - 1];
     insert(arr,n,val);
    //insert(arr, n - 1, val);
    arr[n] = temp;
}
void sort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    int val = arr[n - 1];
    sort(arr, n - 1);
    insert(arr, n - 1, val);
}
int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3};
    sort(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
}