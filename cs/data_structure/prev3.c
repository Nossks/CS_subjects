#include <stdio.h>
#include <stdlib.h>

// Define the binary search tree node structure
struct bst {
    int val;
    struct bst* left;
    struct bst* right;
};

// Function to create a new node
struct bst* create(int x) {
    struct bst* new = malloc(sizeof(struct bst));
    new->val = x;
    new->left = new->right = NULL;
    return new;
}

// Function to insert a value into the binary search tree
struct bst* insert(struct bst* root, int data) {
    if (root == NULL) {
        root = create(data);
    } else if (root->val < data) {
        root->right = insert(root->right, data);
    } else if (root->val > data) {
        root->left = insert(root->left, data);
    } else {
        printf("Invalid value (duplicates not allowed).\n");
        return NULL;
    }
    return root;
}

// Function to perform in-order traversal and print the values
void inOrderTraversal(struct bst* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    printf("%d ", root->val);
    inOrderTraversal(root->right);
}

// Function to free the memory allocated for the binary search tree
void freeTree(struct bst* root) {
    if (root == NULL) {
        return;
    }
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

// Function to count nodes with a right child but no left child
int right(struct bst* root) {
    if (root == NULL) {
        return 0;
    }

    int count = 0;
    if (root->left == NULL && root->right != NULL) {
        count++;
    }

    int l = right(root->left);
    int r = right(root->right);

    return count + l + r;
}

int main() {
    // Example usage
    struct bst* root = NULL;

    // Insert values into the binary search tree
    int choice = 0;
    while (choice != -1) {
        printf("Enter -1 to stop, else enter a value to be stored: ");
        scanf("%d", &choice);
        if (choice != -1) {
            root = insert(root, choice);
        }
    }

    // Print the tree (in-order traversal)
    printf("In-order traversal:\n"); 
    inOrderTraversal(root);
    printf("\n");

    // Count nodes with a right child but no left child
    int count = right(root);
    printf("Number of nodes with a right child but no left child: %d\n", count);

    // Free the allocated memory
    freeTree(root);

    return 0;
}
