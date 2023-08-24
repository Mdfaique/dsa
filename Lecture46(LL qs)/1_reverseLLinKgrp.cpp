// codestudio

// qs=reverse in k grps 

// ip=
// 1 2 3 4 5 6 
// k=2
// 5 4 3 7 9 2 
// k=4 

// op=
// 2 1 4 3 6 5
// 7 3 4 5 2 9

// link=https://www.codingninjas.com/codestudio/problems/reverse-list-in-k-groups_983644?leftPanelTab=0&campaign=Lovebabbar_codestudio_26thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar_codestudio_26thjan


// Node *kReverse(Node *head, int k) {
//   // Write your code here.
//   if (head == NULL) {
//     return NULL;
//   }
//   Node *prev = NULL;
//   Node *curr = head;
//   Node *next = NULL;
//   int count = 0;

//   while (curr != NULL && count < k) {
//     next = curr->next;
//     curr->next = prev;
//     prev = curr;
//     curr = next;
//    count++;
//   }

//   if (next != NULL) {
//     head->next = kReverse(next, k);
//   }
//   return prev;
// }