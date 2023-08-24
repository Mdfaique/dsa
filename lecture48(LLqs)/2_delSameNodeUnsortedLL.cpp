// code studio

// link=https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-unsorted-linked-list_1069331?source=youtube&campaign=YouTube_Lovebabbar29thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar29thJan&leftPanelTab=0

// ip=4 2 5 4 2 2 
// op=4 2 5



// Node *removeDuplicates(Node *head) {
//   if (head == NULL) {
//     return NULL;
//   }

//   unordered_map<int, bool> visited;
//   Node *prev = NULL;
//   Node *curr = head;

//   while (curr != NULL) {
   
//     if (visited[curr->data] != true) {
//       visited[curr->data] = true;
//       prev = curr;
//       curr = curr->next;
//     } 
    
//     else {
//       prev->next = curr->next;
//       curr = curr->next;
//     }
//   }
//   return head;
// }