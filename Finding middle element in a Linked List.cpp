/* Function only Submission */

/* Link list Node 
struct Node {
    int data;
    struct Node* next;
}; */

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(struct Node *head) {
    if (head == NULL) return -1;
    Node *fast = head, *slow = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}