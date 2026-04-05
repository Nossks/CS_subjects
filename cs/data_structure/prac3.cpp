#include <iostream>
struct node {
    int data;
    node* left;
    node* right;
    // Constructor
    node(int value) : data(value), left(nullptr), right(nullptr) {}
};
int bst(node* root, int k) {
    if (root == nullptr) {
        return 0;
    }
    int count = 0;  // Initialize count to 0
    if (root->left != nullptr || root->right != nullptr) {
        count = 1;  // If the current node has at least one child, increment count
    }
    int l = bst(root->left, k);    // Recursively check the left subtree
    int r = bst(root->right, k);   // Recursively check the right subtree
    return count + l + r;  // Return the total count
}
// Utility function to insert a new node into the BST
node* insert(node* root, int key) {
    if (root == nullptr) {
        return new node(key);
    }
    if (key < root->data) {
        root->left = insert(root->left, key);
    } else if (key > root->data) {
        root->right = insert(root->right, key);
    }
    return root;
}
// Utility function to create a sample BST
node* createBST() {
    node* root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    //insert(root, 70);
    //insert(root, 20);
    //insert(root, 40);
    //insert(root, 60);
    //insert(root, 80);
    //insert(root,99);
    return root;
}
int main() {
    node* root = createBST();
    int k = 0;  // Value to search for
    int result = bst(root, k);
    std::cout << "Number of nodes with at least one child: " << result << std::endl;
    return 0;
}
