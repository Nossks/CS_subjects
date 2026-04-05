#include <iostream>
// Assuming 'node' is defined appropriately in your code
class node
{
public:
    int val;
    node *left;
    node *right;
    node(int x) : val(x), left(nullptr), right(nullptr) {}
};
int palindrome(int val)
{
    int rev = 0;
    int n = val;
    int rem;
    while (n != 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    if (rev == val)
    {
        return 1;
    }
    return 0;
}
int bst(node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    int count = palindrome(root->val); // Check if the current node is a palindrome
    int l = bst(root->left);           // Recursively check the left subtree
    int r = bst(root->right);          // Recursively check the right subtree
    return count + l + r;              // Return the total count
}
int main()
{
    // Example binary search tree
    node *root = new node(12);
    root->left = new node(14);
    root->right = new node(13);
    root->left->left = new node(21);
    root->left->right = new node(41);
    // Call the 'bst' function to count palindromic values
    int palindromicCount = bst(root);
    // Display the result
    std::cout << "Number of palindromic values in the BST: " << palindromicCount << std::endl;
    // Clean up: Free the allocated memory (assuming appropriate cleanup logic)
    // ...
    return 0;
}
