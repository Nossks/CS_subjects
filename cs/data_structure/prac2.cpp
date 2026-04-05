#include <iostream>
class node {
public:
    int val;
    node* left;
    node* right;
    node(int x) : val(x), left(nullptr), right(nullptr) {}
};
int multiple(int val, int k) {
    if (val % k == 0) {
        return 1;
    }
    return 0;
}
int bst(node* root, int k) {
    if (root == nullptr) {
        return 0;
    }
    int count=multiple(root->val,k);
    int l = bst(root->left, k);          // Recursively check the left subtree
    int r = bst(root->right, k);         // Recursively check the right subtree
    return  count+l + r;                // Return the total count
}
int main() {
    // Example binary search tree
    node* root = new node(-19);
    root->left = new node(1);
    root->right = new node(2);
    root->left->left = new node(59);
    root->left->right = new node(2);
    int k = 1;
    // Call the 'bst' function to count nodes with values that are multiples of k
    int multipleCount = bst(root, k);
    // Display the result
    std::cout << "Number of nodes with values multiple of " << k << ": " << multipleCount << std::endl;
    // Clean up: Free the allocated memory
    // ...
    return 0;
}