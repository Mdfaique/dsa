// codestudio

// ip=
// first=7 8 
// second=1 3 4 6 

// op=1 3 4 6 7 8 

// link=https://www.codingninjas.com/codestudio/problems/merge-two-sorted-linked-lists_800332?leftPanelTab=1&campaign=YouTube_Lovebabbar31stJan2021&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar31stJan2021


// Node<int>* solve(Node<int> *first, Node<int> *second) {

//   // if only one elemnt is present in first list
//   if(first->next==NULL){
//     first->next=second;
//     return first;
//   }
//   Node<int>* curr1 = first;
//   Node<int>* next1 = curr1->next;
//   Node<int>* curr2 = second;
//   Node<int>* next2 = curr2->next;

//   while (next1 != NULL && curr2 != NULL) {
//     if ((curr2->data >= curr1->data) && (curr2->data <= next1->data)) {
//       // add node between the nodes of 1st list
//       curr1->next = curr2;
//       next2 = curr2->next;
//       curr2->next = next1;

//       // updating pointers
//       curr1 = curr2;
//       curr2 = next2;
//     }

//     else {
//       // go one step ahead in 1st list
//       curr1 = next1;
//       next1 = next1->next;
//       if (next1 == NULL) {
//         curr1->next = curr2;
//         return first;
//       }
//     }
//   }
//   return first;
// }

// Node<int> *sortTwoLists(Node<int> *first, Node<int> *second) {
//   // Write your code here.
//   if (first == NULL)
//     return second;
//   if (second == NULL)
//     return first;

//   if (first->data <= second->data)
//     return solve(first, second);
//   else
//     return solve(second, first);
// }