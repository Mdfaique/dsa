// codestudio

// link=https://www.codingninjas.com/codestudio/problems/flatten-a-linked-list_1112655?source=youtube&campaign=YouTube_CodestudioLovebabbar5thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar5thfeb&leftPanelTab=1

// recursion and merge sort used LL






// *****************************************************************/
// Node *merge(Node *left, Node *right) {
//   if (left == NULL)
//     return right;
//   if (right == NULL)
//     return left;
//   Node *ans = new Node(-1);
//   Node *temp = ans;
//   while (left != NULL && right != NULL) {
//     if (left->data < right->data) {
//       temp->child = left;
//       temp = left;
//       left = left->child;
//     } else {
//       temp->child = right;
//       temp = right;
//       right = right->child;
//     }
//   }
//   if (left != NULL) {
//     temp->child = left;
//     // temp = left;
//     left = left->child;
//   }
//   if (right != NULL) {
//     temp->child = right;
//     // temp = right;
//     right = right->child;
//   }
//   return ans->child;
// }
// Node *flattenLinkedList(Node *head) {
//   if (head == NULL)
//     return head;

//   Node *down = head;
//   Node *right = head->next;
//   down->next = NULL;
//   right = flattenLinkedList(right);

//   Node *ans = merge(down, right);
//   return ans;
// }
