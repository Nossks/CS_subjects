#include <stdio.h>
void maxProduct(int *nums, int numsSize)
{
    int i;
    int m1 = nums[0], m2, a, b;
    for (i = 1; i < numsSize; i++)
    {
        if (m1 < nums[i])
        {
            m2 = m1;
            m1 = nums[i];
        }
        else if (m1 > nums[i] && m2 > nums[i])
        {
            m2 = m2;
        }
        else if (m1 > nums[i] && m2 < nums[i])
        {
            m2 = nums[i];
        }
        else if (m1 = nums[i])
        {
            m2 = nums[i];
        }
        else if (m1 > nums[i] && m2 == nums[i])
        {
            m2 = m2;
        }
    }
    printf("%d %d\n", m1, m2);
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] == m1)
        {
            a = i;
            break;
        }
    }
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] == m2)
        {
            b = i;
            break;
        }
    }
    printf("%d %d\n", a, b);
    int result;
    result = (nums[a] - 1) * (nums[b] - 1);
    printf("%d", result);
}
int main()
{
    int arr[8] = {1, 9, 4, 8, 8, 9, 4, 6}; //[1,9,4,8,8,9,4,6]
    int size = 8;
    int i;
    maxProduct(arr, size);
}
