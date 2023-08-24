// codeStudio

// link=https://www.codingninjas.com/codestudio/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=1&campaign=YouTube_Lovebabbar31stJan2021&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar31stJan2021

// ip=1 0 2 1 2 
// op=0 1 1 2 2 



// void insertAtTail(Node *&tail, Node *curr) {
//   tail->next = curr;
//   tail = curr;
// }
// Node *sortList(Node *head) {
  // approach 1 replacing data
  // Write your code here.
  // if (head == NULL)
  //   return head;
  // Node *temp = head;
  // int count0 = 0;
  // int count1 = 0;
  // int count2 = 0;
  // while (temp != NULL) {
  //   if (temp->data == 0)
  //     count0++;
  //   if (temp->data == 1)
  //     count1++;
  //   if (temp->data == 2)
  //     count2++;
  //   temp = temp->next;
  // }
  // temp = head;
  // while (temp != NULL) {
  //   if (count0 != 0) {
  //     temp->data = 0;
  //     count0--;
  //   }

  //   else if (count1 != 0) {
  //     temp->data = 1;
  //     count1--;
  //   }

  //   else if (count2 != 0) {
  //     temp->data = 2;
  //     count2--;
  //   }
  //   temp = temp->next;
  // }
  // return head;

//   // approach 2 not replacing data
//   Node *zeroHead = new Node(-1);
//   Node *zeroTail = zeroHead;
//   Node *oneHead = new Node(-1);
//   Node *oneTail = oneHead;
//   Node *twoHead = new Node(-1);
//   Node *twoTail = twoHead;

//   Node *curr = head;
//   while (curr != NULL) {
//     int value = curr->data;
//     if (value == 0)
//       insertAtTail(zeroTail, curr);
//     else if (value == 1)
//       insertAtTail(oneTail, curr);
//     else if (value == 2)
//       insertAtTail(twoTail, curr);
//     curr = curr->next;
//   }

//   if (oneHead->next != NULL) {
//     zeroTail->next = oneHead->next;
//   } else {
//     zeroTail->next = twoHead->next;
//   }
//   oneTail->next = twoHead->next;
//   twoTail->next = NULL;

//   head=zeroHead->next;

//   delete zeroHead;
//   delete oneHead;
//   delete twoHead;

//   return head;
// }
