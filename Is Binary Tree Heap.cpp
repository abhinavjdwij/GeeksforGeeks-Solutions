/* Method Only Submission */
/*
 A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/

/*You are required to complete this method */
bool isHeap(struct Node * tree) {
    if (tree->left == NULL && tree->right == NULL)
        return true;
    bool ans;
    if (tree->left == NULL) {
        ans = (tree->data >= tree->right->data);
        return ans && isHeap(tree->right);
    }
    if (tree->right == NULL) {
        ans = (tree->data >= tree->left->data);
        return ans && isHeap(tree->left);
    }
    ans = (tree->data >= tree->right->data) &&
    (tree->data >= tree->left->data);
    return ans && isHeap(tree->left) && isHeap(tree->right);
}