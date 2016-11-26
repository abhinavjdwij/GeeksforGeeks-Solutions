/* Method Only Submission */
/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
};*/

/*You are required to complete this method*/
Node * deleteK(Node *head, int k) {
    if (k == 0) return head;
    if (k == 1) return NULL;
    Node *root = head, *prev = NULL;
    for (int i = 1; head; i++) {
        if (i % k == 0) {
            prev->next = head->next;
            if (head->next) {
                head = head->next->next;
                prev = prev->next;
            }
            else head = NULL;
            i += 1;
        }
        else {
            prev = head;
            head = head->next;
        }
    }
    return root;
}