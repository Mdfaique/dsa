// codestudio

// ip=1 2 2 3 
// op=1 2 3 

// link=https://www.codingninjas.com/codestudio/problems/unique-sorted-list_2420283?leftPanelTab=3&campaign=YouTube_Lovebabbar29thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar29thJan




// Node *uniqueSortedList(Node *head) {
//   // Write your code here.
//   Node *curr = head;
//   if (head == NULL)
//     return NULL;
    

//   while (curr != NULL) {

//     if ((curr->next != NULL) && curr->data == curr->next->data) {
//       delete (curr->next);
//       curr->next = curr->next->next;
//     }

//     else {
//       curr = curr->next;
//     }
//   }
//   return head;
// }