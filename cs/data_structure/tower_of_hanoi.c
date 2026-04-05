#include<stdio.h>
void TOH(int n, char A, char B, char C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        printf("move a disc from %c to %c\n", A, C);
        TOH(n - 1, B, A, C);
    }
}
int main()
{
    printf("enter no. of dics to move from a to c using b");
    int n = 0;
    scanf("%d",&n);
    char A='A',B='B',C='C';
    TOH(n, A, B, C);
    return 0;
}