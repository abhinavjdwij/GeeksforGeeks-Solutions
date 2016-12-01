/*
  Sort the list of 0's,1's and 2's
  The input list will have at least one element  
  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }

*/


void sortList(struct node *head) {
   node *temp = head;
   int a = 0, b = 0, c = 0;
   while (temp != NULL) {
       if (temp->data == 0) a++;
       else if (temp->data == 1) b++;
       else c++;
       temp = temp->next;
   }
   temp = head;
   while (a--) {
       temp->data = 0;
       temp = temp->next;
   }
   while (b--) {
       temp->data = 1;
       temp = temp->next;
   }
   while (c--) {
       temp->data = 2;
       temp = temp->next;
   }
}