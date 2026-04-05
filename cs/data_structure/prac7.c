#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} tree;
void fun(tree* root, int k, int* count) {
    if (root == NULL || *count >= k) {
        return;
    }
    // Traverse the tree in reverse order (right, root, left)
    fun(root->right, k, count);
    // Check if this is the kth largest element
    (*count)++;
    if (*count == k) {
        printf("%d\n", root->data);
        return;
    }
    fun(root->left, k, count);
}
// Helper function to create a new node in the BST
tree* newNode(int data) {
    tree* new_node = (tree*)malloc(sizeof(tree));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
// Helper function to free the memory of the BST
void freeTree(tree* root) {
    if (root == NULL) {
        return;
    }
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}
int main(void) {
    // Example usage:
    tree* root = newNode(50);
    root->left = newNode(30);
    root->right = newNode(70);
    root->left->left = newNode(20);
    root->left->right = newNode(40);
    root->right->left = newNode(60);
    root->right->right = newNode(80);
    int k = 3;
    printf("The %dth largest element is: ", k);
    int count = 0;
    fun(root, k, &count);
    // Free the allocated memory
    freeTree(root);
    return 0;
}
