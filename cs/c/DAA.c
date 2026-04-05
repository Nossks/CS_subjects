#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int iterative_linear_search(int array[], int size, int key, int *comparisons) {
    for (int i = 0; i < size; i++) {
        (*comparisons)++;
        if (array[i] == key)
            return i + 1;
    }
    return 0;
}

int recursive_linear_search(int array[], int key, int index, int size, int *comparisons) {
    if (index >= size)
        return 0;
    (*comparisons)++;
    if (array[index] == key)
        return index + 1;
    return recursive_linear_search(array, key, index + 1, size, comparisons);
}

int main() {
    printf("LINEAR SEARCH ALGORITHM\n\n");

    char method[10];
    int size, searches, comparisons = 0, key, result;

    printf("Enter size of the array in which searching operation has to be performed :: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size. Exiting program.\n");
        return 1;
    }

    int array[size];

    for (int i = 0; i < size; i++) {
        printf("Enter element %d :: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Which approach would you like to use for this operation?\nITERATIVE\nRECURSIVE\n:::: ");
    scanf("%s", method);

    if(strcmp(method, "iterative") != 0 && strcmp(method, "recursive") != 0) {
        printf("Invalid approach selected. Exiting program.\n");
        return 1;
    }

    printf("Enter number of searches to be performed :: ");
    scanf("%d", &searches);

    if (searches <= 0) {
        printf("Invalid number of searches. Exiting program.\n");
        return 1;
    }

    while (searches > 0) {
        printf("Enter key to be searched :: ");
        scanf("%d", &key);

        if (strcmp(method, "iterative") == 0) {
            printf("APPROACH - ITERATIVE\n");
            result = iterative_linear_search(array, size, key, &comparisons);
        } else {
            printf("APPROACH - RECURSIVE\n");
            result = recursive_linear_search(array, key, 0, size, &comparisons);
        }

        if (result) {
            printf("The key %d is present in the array at index %d.\n", key, result - 1);
        } else {
            printf("The key %d is not present in the array.\n", key);
        }

        printf("Total number of comparisons: %d\n", comparisons);
        comparisons = 0;
        searches--;
    }

    return 0;
}
