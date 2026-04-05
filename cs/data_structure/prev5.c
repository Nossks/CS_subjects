#include <stdio.h>
#include <stdlib.h> 
// Define a linked list node structure
struct ll {
    int data;
    struct ll* next;
};  
// Function to remove duplicate elements from the linked list
void duplicate(struct ll* ptr);
// Function to print the linked list
void printList(struct ll* p1);
int main() {
    // Creating a linked list with duplicate elements
    struct ll* head = NULL;
    struct ll* second = NULL;
    struct ll* third = NULL;
    struct ll* fourth = NULL;
    head = (struct ll*)malloc(sizeof(struct ll));
    second = (struct ll*)malloc(sizeof(struct ll));
    third = (struct ll*)malloc(sizeof(struct ll));
    fourth = (struct ll*)malloc(sizeof(struct ll));
    head->data = 1;
    head->next = second;
    second->data = 88;
    second->next = third;
    third->data = 1; // Duplicate element
    third->next = fourth;
    fourth->data = 1;
    fourth->next = NULL;
    // Print the original linked list
    printf("Original Linked List: ");
    printList(head);
    // Remove duplicate elements
    duplicate(head);
    // Print the modified linked list after removing duplicates
    printf("Linked List after removing duplicates: ");
    printList(head);
    return 0;
}
// Function to remove duplicate elements from the linked list
void duplicate(struct ll* ptr) {
    struct ll* p0 = ptr;
    while (p0) {
        struct ll* p1 = p0->next;
        struct ll* p2 = p0;
        while (p1 != NULL) {
            if (p1->data == p0->data) {
                p2->next=p1->next;
                p1=p1->next;
            }
            else{
            p2 = p1;
            p1=p1->next;}
        }
        p0 = p0->next;
    }
}
void printList(struct ll * root){
    if(root==0){
        return ;
    }
    printf("%d->",root->data);
    printList(root->next);
}