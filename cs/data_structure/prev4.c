#include <stdio.h>
#include <stdlib.h>

// Define a linked list node structure
struct ll {
    int data;
    struct ll* next;
};

// Function to delete a node with a specific value from the linked list
struct ll* del(struct ll* p1, int x);

// Function to print the linked list
void printList(struct ll* head);

int main() {
    // Creating a linked list
    struct ll* head = NULL;
    struct ll* second = NULL;
    struct ll* third = NULL;

    head = (struct ll*)malloc(sizeof(struct ll));
    second = (struct ll*)malloc(sizeof(struct ll));
    third = (struct ll*)malloc(sizeof(struct ll));

    head->data = 2;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // Print the original linked list
    printf("Original Linked List: ");
    printList(head);

    // Delete a node with a specific value (e.g., 2)
    head = del(head, 2);

    // Print the modified linked list
    printf("Linked List after deletion: ");
    printList(head);

    return 0;
}

// Function to delete a node with a specific value from the linked list
struct ll* del(struct ll* p1, int x) {
    struct ll* head = p1;
    struct ll* p2 = NULL;
    while (p1 != NULL) {
        if (p1->data == x) {
            if (p1 == head) {
                head = head->next;
            } else {
                p2->next = p1->next;
            }
            free(p1); // Free the memory of the node being deleted
            break;
        }
        p2 = p1;
        p1 = p1->next;
    }
    if (p1 == NULL) {
        printf("Element not found.\n");
    }
    return head;
}

// Function to print the linked list
void printList(struct ll* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
