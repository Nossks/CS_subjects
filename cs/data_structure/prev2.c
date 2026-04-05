#include <stdio.h>
#include <stdlib.h>

// Define the linked list node structure
struct ll {
    int data;
    struct ll* next;
};

// Function to create a new node
struct ll* create(int data) {
    struct ll* n = malloc(sizeof(struct ll));
    n->data = data;
    n->next = NULL;
    return n;
}
// Function to combine two linked lists
struct ll* fun(struct ll* p1, struct ll* p2) {
    struct ll *q = NULL;
    struct ll *sample = NULL;  // Initialize sample to NULL
    while (p1 && p2) {
        if (q == NULL) {
            q = create(p1->data);
            q->next = create(p2->data);
            sample = q;  // Update sample only once when q is NULL
            q=q->next;
        } else {
            q->next = create(p1->data);
            q->next->next = create(p2->data);
            q = q->next->next;  // Move q to the last node
        }
        p1 = p1->next;
        p2 = p2->next;
    }
    // Copy remaining elements from p1
    while (p1) {
        if (q == NULL) {
            q = create(p1->data);
            sample = q;  // Update sample only once when q is NULL
        } else {
            q->next = create(p1->data);
            q = q->next;
        }
        p1 = p1->next;
    }
    // Copy remaining elements from p2
    while (p2) {
        if (q == NULL) {
            q = create(p2->data);
            sample = q;  // Update sample only once when q is NULL
        } else {
            q->next = create(p2->data);
            q = q->next;
        }
        p2 = p2->next;
    }
    return sample;
}
// Function to print a linked list
void printList(struct ll* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    // Create two linked lists for testing
    struct ll* list1 = create(1);
    list1->next = create(3);
    list1->next->next = create(5);

    struct ll* list2 = create(2);
    list2->next = create(4);
    list2->next->next = create(6);
    // Call the fun function to combine the two lists
    struct ll* combinedList = fun(list1, list2);

    // Print the original lists and the combined list
    printf("List 1: ");
    printList(list1);

    printf("List 2: ");
    printList(list2);

    printf("Combined List: ");
    printList(combinedList);

    return 0;
}
