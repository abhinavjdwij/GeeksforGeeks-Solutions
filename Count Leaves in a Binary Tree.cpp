/* Function Only Submission */
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */
int countLeaves(struct Node* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    if (root->left == NULL) return countLeaves(root->right);
    if (root->right == NULL) return countLeaves(root->left);
    return countLeaves(root->left) + countLeaves(root->right);
}
