/* Method Only Submission */
/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

/* Should convert tree to its mirror */
void mirror(struct Node* node)  {
    if (node == NULL) return;
    struct Node* temp = node->left;
    node->left = node->right;
    node->right = temp;
    mirror(node->left);
    mirror(node->right);
}