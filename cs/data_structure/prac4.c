#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
// Function to merge two sorted linked lists
struct Node* merge(struct Node* left, struct Node* right) {
    if (left == NULL) {
        return right;
    }
    if (right == NULL) {
        return left;
    }
    struct Node* result = NULL;
    if (left->data <= right->data) {
        result = left;
        result->next = merge(left->next, right);
    } else {
        result = right;
        result->next = merge(left, right->next);
    }
    return result;
}
// Function to find the middle of the linked list
struct Node* findMiddle(struct Node* head) {
    struct Node* slow = head;
    struct Node* fast = head;
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
// Function to perform merge sort on the linked list
struct Node* mergeSort(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    // Find the middle of the linked list
    struct Node* middle = findMiddle(head);
    struct Node* nextToMiddle = middle->next;
    // Split the linked list into two halves
    middle->next = NULL;
    // Recursively sort the two halves
    struct Node* left = mergeSort(head);
    struct Node* right = mergeSort(nextToMiddle);
    // Merge the sorted halves
    return merge(left, right);
}
// Function to insert a new node at the end of the linked list
void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}
// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
// Function to free the memory allocated for the linked list
void freeList(struct Node* head) {
    struct Node* current = head;
    struct Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}
int main() {
    // Create a sample linked list
    struct Node* head = NULL;
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head,77);
     insertAtEnd(&head,7);
      insertAtEnd(&head,62);
       insertAtEnd(&head,77);
    printList(head);
    // Sort the linked list
    head = mergeSort(head);
    // Print the sorted linked list
    printList(head);
    // Free memory allocated for the linked list nodes
    freeList(head);
    return 0;
}
