/* Method Only Submission */
/*
Count the number of nodes 
in the linked list
Node is defined as 
struct node
{
    int data;
    struct node* next;
};
 
*/

int getCount(struct node* head){
    if (head == NULL) return 0;
    return 1 + getCount(head->next);
}