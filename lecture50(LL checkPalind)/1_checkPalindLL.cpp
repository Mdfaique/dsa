// GFG

// Input:
// N = 3
// value[] = {1,2,1}
// Output: 1
// Explanation: The given linked list is
// 1 2 1 , which is a palindrome and
// Hence, the output is 1.

// link=https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

// 2=methods
// 1st T.C=O(n) and S.C(n) {unoptimized}
// 2nd T.C=O(n) and S.C(1) {optimized}

// /////////////////////////////////////////////////////////////
// ------------------METHOD1(using array)-----------------------
// #include <vector>

// class Solution{
//   public:
//     //Function to check whether the list is palindrome.
//     bool checkPalindrome(vector<int> arr)
//     {
        
//         int n=arr.size();
//         int s=0;
//         int e=n-1;
//         while(s<=e)
//         {
//             if(arr[s]!=arr[e]) return false;
//             else {
//                 s++;
//                 e--;
//             }
//         }
//         return true;
//     }
//     bool isPalindrome(Node *head)
//     {
//         // //Your code here
//         if(head->next==NULL) return true;
//         Node* temp=head;
//         vector<int> arr;
//         while(temp!=NULL)
//         {
//             arr.push_back(temp->data);
//             temp=temp->next;
//         }
//        return checkPalindrome(arr);
//   }      
// };


// ///////////////////////////////////////////////////////////////
// -------------------METHOD2(CONSTANT SPACE)-----------------------
// class Solution{
//   public:
//     //Function to check whether the list is palindrome.
//     Node* findMid(Node* head){
//         Node* slow=head;
//         Node* fast=head->next;
//         while(fast!=NULL && fast->next!=NULL)
//         {
//             fast=fast->next->next;
//             slow=slow->next;
//         }
//         return slow;
//     }
//     Node* reverse(Node* head)
//     {
//         Node*curr=head;
//         Node*next=NULL;
//         Node*prev=NULL;
//         while(curr!=NULL){
//             next=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//         }
//         return prev;
//     }
//     bool isPalindrome(Node *head)
//     {
//         //Your code here
//         if(head->next==NULL) return true;
        
//         //find middle
//         Node* middle=findMid(head);
        
//         //reversing after middle
//         Node* temp=middle->next;
//         //joining reversed list
//         middle->next= reverse(temp);
        
//         //compare
//         Node* head1=head;
//         Node* head2=middle->next;
        
//         while(head2!=NULL)
//         {
//             if(head1->data!=head2->data) return false;
//             else {
//                 head1=head1->next;
//                 head2=head2->next;
//             }
//         }
        
//         // set ll to original as provided 
//         temp=middle->next;
//         middle->next= reverse(temp);
        
        
//         return true;

        
//     }
// };






