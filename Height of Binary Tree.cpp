/* Function Only Submission */
/* Tree node structure  used in the program
 struct Node
 {
     int data;
     struct Node* left, *right;
}; */

/* Computes the height of binary tree with given root.  */
int height(struct Node* node) {
    if (node == NULL) return 0;
    if (node->left == NULL && node->right == NULL) return 1;
    if (node->left == NULL) return 1 + height(node->right);
    if (node->right == NULL) return 1 + height(node->left);
    return 1 + max(height(node->right), height(node->left));
}