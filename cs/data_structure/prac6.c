#include <stdio.h>
#include <stdlib.h>
struct dll {
    int data;
    struct dll* prev;
    struct dll* next;
};
struct dll* head = NULL;
struct dll* tail = NULL;
void create(void) {
    int choice = 1;
    while (choice) {
        struct dll* new_node = (struct dll*)malloc(sizeof(struct dll));
        if (new_node == NULL) {
            printf("Memory allocation failed\n");
            exit(1);
        }
        printf("Enter value to insert (0 to stop): ");
        scanf("%d", &new_node->data);
        if (new_node->data == 0) {
            free(new_node); // Free the memory if the user decides to stop
            break;
        }
        new_node->prev = NULL;
        new_node->next = NULL;
        if (head == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            struct dll* x = tail;
            while (x != NULL && x->data < new_node->data) {
                x = x->prev;
            }
            if (x == NULL) { // Insert at the beginning
                new_node->next = head;
                head->prev = new_node;
                head = new_node;
            } else {
                new_node->next = x->next;
                if (x->next != NULL) {
                    x->next->prev = new_node;
                } else {
                    tail = new_node;
                }
                x->next = new_node;
                new_node->prev = x;
            }
        }
    }
}
int main(void) {
    create();
    while(head){
        printf("%d\t",head->data);
        head=head->next;
    }
    // You can add code to print the elements of the doubly linked list here
    return 0;
}
