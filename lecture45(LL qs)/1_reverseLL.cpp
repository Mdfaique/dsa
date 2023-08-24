// code studio
// rverse LL
// link=https://www.codingninjas.com/codestudio/problems/reverse-the-singly-linked-list_799897?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan&leftPanelTab=0

// APPROACH 1 ITERATION

// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
//     if(head==NULL || head->next==NULL)
//     {
//         return head;
//     }
//     // Write your code here
//     LinkedListNode<int>* curr=head;
//     LinkedListNode<int>* prev=NULL;
//     LinkedListNode<int>* frwd=NULL;
   

//     while(curr!=NULL)
//     {
//         frwd=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=frwd;

//     }

//     return prev;

    
// }

// <------------------------------------------------------------------------------->
// APPROACH 2 RECURSION

// void reverse(LinkedListNode<int>* &head,LinkedListNode<int>* &curr,LinkedListNode<int>* &prev)
// {
//     if(curr==NULL)
//     {
//         head=prev;
//         return;
//     }

//     LinkedListNode<int>* frwd=curr->next;
//     reverse(head,frwd,curr);
//     curr->next=prev;
// }

//LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
//    
//     // Write your code here
//     LinkedListNode<int>* curr=head;
//     LinkedListNode<int>* prev=NULL;
//     reverse(head,curr,prev);
//     return head;
// }

// <------------------------------------------------------------->

//APPROACH 3

// LinkedListNode<int>* reverse1(LinkedListNode<int>* &head)
// {
//     if(head==NULL || head->next==NULL)
//     {
//         return head;
//     }

//     LinkedListNode<int>* chotahead=reverse1(head->next);

//     head->next->next=head;
//     head->next=NULL;

//     return chotahead;
// }

//LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
//     return reverse1(head);
//     
// }

