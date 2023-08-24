// code studio
// self done method 1
// link=https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan&leftPanelTab=1

// ip=4 0 32 5 48 6
// op=5

//method 1
// Node *findMiddle(Node *head) {
//     // Write your code here
//     if(head==NULL || head->next==NULL)
//     {
//         return head;
//     }
    
//     Node* curr=head;
//     int cnt=0;

//     while(curr!=NULL)
//     {
//       cnt++;
//       curr=curr->next;
//     }
//     // getting size of LL

//     int n=(cnt/2)+1;
//     int nc=1;
//     Node*temp=head;
//     //keeping nc less than n
//     while(nc<n)
//     {
//       nc++;
//       temp=temp->next;
//     }
//     return temp;
// }

// <-------------------------------------------------------------------------------------->
// method 2 optimized

// Node* getmiddle(Node* &head)
// {
//     if(head==NULL || head->next==NULL)
//     {
//         return head;
//     }
    
//     Node* slow=head; //slow at 1 {1,2,3,4,5} next iteration slow at 2
//     Node* fast=head->next;//fast at2 {1,2,3,4,5} next iteration fast at 4
//     while(fast!=NULL)
//     {
//         fast=fast->next;
//         if(fast!=NULL)
//         {
//             fast=fast->next; //fast moves 2 times and slow 1 times so fast will reach 2x faster than slow that means slow is at half index when fast at finish so we return slow as ans
//         }
//         slow=slow->next;
//     }

//     return slow;
// }

// Node *findMiddle(Node *head) 
// {
//   return getmiddle(head);
// }