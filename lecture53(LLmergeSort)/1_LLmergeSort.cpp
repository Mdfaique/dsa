// codestudio

// using mergeSort in LL
// T.C= O(nLogn)
// S.C=O(logn)

// link=https://www.codingninjas.com/codestudio/problems/mergesort-linked-list_630514?leftPanelTab=1&campaign=YouTube_CodestudioLovebabbar5thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar5thfeb


// ********************************************************************/
// node *findMid(node *head) {
//   node *slow = head;
//   node *fast = head->next;
//   while (fast != NULL && fast->next != NULL) {
//     fast = fast->next;
//     if (fast != NULL) {
//       fast = fast->next;
//     }
//     slow = slow->next;
//   }
//   //below is the same working logic
//   // while (fast != NULL && fast->next != NULL) {
//   //   slow = slow->next;
//   //   fast = fast->next->next;
//   // }
//   return slow;
// }
// node *merge(node *left, node *right) {
//   if (left == NULL) {
//     return right;
//   }
//   if (right == NULL) {
//     return left;
//   }

//   node *ans = new node(-1);
//   node *temp = ans;

//   // merge 2 sorted LL
//   while (left != NULL && right != NULL) {
//     if (left->data < right->data) {
//       temp->next = left;
//       temp = left;
//       left = left->next;
//     } else {
//       temp->next = right;
//       temp = right;
//       right = right->next;
//     }
//   }

//   while (left != NULL) {
//     temp->next = left;
//     temp = left;
//     left = left->next;
//   }
//   while (right != NULL) {
//     temp->next = right;
//     temp = right;
//     right = right->next;
//   }
//   ans = ans->next;
//   return ans;
// }
// node *mergeSort(node *head) {
//   // Write your code here.
//   if (head == NULL || head->next == NULL) {
//     return head;
//   }

//   node *mid = findMid(head);

//   node *left = head;
//   node *right = mid->next;
//   mid->next = NULL;

//   left = mergeSort(left);
//   right = mergeSort(right);

//   node *result = merge(left, right);
//   return result;
// }
