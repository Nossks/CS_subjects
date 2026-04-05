#include <stdio.h>
#include <stdlib.h>

void fun(int arr[], int n, int head) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += abs(head - arr[i]);
        head = arr[i];
    }
    printf("Total head movement is %d\n", total);
}

int main() {
    int n, head;
    printf("Enter number of tracks: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter track locations: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter initial head position: ");
    scanf("%d", &head);
    fun(arr, n, head);
    return 0;
}

