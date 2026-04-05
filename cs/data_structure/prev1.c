#include <stdio.h>
#include <stdlib.h>

// Define the linked list structure
struct ll {
    int data;
    struct ll* next;
};
// Function to reverse a linked list
struct ll* reverse(struct ll* p){
    struct ll* p1 = 0;
    while (p) {
        struct ll* p2 = p->next;
        p->next = p1;
        p1 = p;
        p = p2;
    }
    return p1;
}
// Function to print a linked list
void printList(struct ll* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    // Creating a sample linked list
    struct ll* head = (struct ll*)malloc(sizeof(struct ll));
    head->data = 1;
    head->next = (struct ll*)malloc(sizeof(struct ll));
    head->next->data = 2;
    head->next->next = (struct ll*)malloc(sizeof(struct ll));
    head->next->next->data = 3;
    head->next->next->next = NULL;

    // Printing the original linked list
    printf("Original linked list:\n");
    printList(head);

    // Reversing the linked list
    head = reverse(head);

    // Printing the reversed linked list
    printf("\nReversed linked list:\n");
    printList(head);

    // Freeing the memory allocated for the linked list nodes
    while (head) {
        struct ll* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
