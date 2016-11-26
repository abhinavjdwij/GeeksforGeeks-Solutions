/* Function Only Submission */
/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void display(Node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}