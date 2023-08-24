// gfg

// Input:
// N = 4, M = 2
// value = {1,2,3,4}
// pairs = {{1,2},{2,4}}
// Output: 1
// Explanation: In this test case, there
// are 4 nodes in linked list.  Among these
// 4 nodes,  2 nodes have arbitrary pointer
// set, rest two nodes have arbitrary pointer
// as NULL. Second line tells us the value
// of four nodes. The third line gives the
// information about arbitrary pointers.
// The first node arbitrary pointer is set to
// node 2.  The second node arbitrary pointer
// is set to node 4.

// link=https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1

// 2 Methods= 
// T.C{O(n)} and S.C{O(n)}
// T.c{O(n)} and S.C{O(1)} optimised

// //////////////////////////////////////////////////////////////////////////////////
// ------------------------------METHOD_1----------------
// //{ Driver Code Starts
// #include <bits/stdc++.h>

// using namespace std;
// /* Link list Node */
// struct Node {
//     int data;
//     Node *next;
//     Node *arb;

//     Node(int x) {
//         data = x;
//         next = NULL;
//         arb = NULL;//random poiinter
//     }
// };



// // } Driver Code Ends
// class Solution
// {
//     public:
//     void insertAtTail(Node* &head,Node* &tail,int d){
//         Node* newNode=new Node(d);
//         if(head==NULL){
//             head=newNode;
//             tail=newNode;
//             return;
//         }
//         else{
//             tail->next=newNode;
//             tail=newNode;
//         }
        
//     }
//     Node *copyList(Node *head)
//     {
//         //Write your code here
//         Node* cloneHead=NULL;
//         Node* cloneTail=NULL;
//         Node* temp=head;
//         while(temp!=NULL){
//             insertAtTail(cloneHead,cloneTail,temp->data);
//             temp=temp->next;
//         }
        
//         // create a map 
//         unordered_map<Node*,Node*> oldToNewNode;
//         Node* originalNode=head;
//         Node* cloneNode=cloneHead;
//         while(originalNode!=NULL){
//             oldToNewNode[originalNode]=cloneNode;
//             originalNode=originalNode->next;
//             cloneNode=cloneNode->next;
//         }
        
//         //setting random pointers
//          originalNode=head;
//          cloneNode=cloneHead;
//          while(originalNode!=NULL)
//          {
//              cloneNode->arb=oldToNewNode[originalNode->arb];
//              originalNode=originalNode->next;
//             cloneNode=cloneNode->next;
//          }
//          return cloneHead;
//     }

// };

///////////////////////////////////////////////////////////////////////////////////////
// ---------------------METHOD-2----------------------

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    Node *next;
    Node *arb;

    Node(int x) {
        data = x;
        next = NULL;
        arb = NULL;
    }
};



// } Driver Code Ends
class Solution
{
    public:
    void insertAtTail(Node* &head,Node* &tail, int d)
    {
        Node* newNode=new Node(d);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    Node *copyList(Node *head)
    {
        //Write your code here
        
        //1 Create a clone list
        Node* cloneHead=NULL;
        Node* cloneTail=NULL;
        Node* temp=head;
        while(temp!=NULL){
            insertAtTail(cloneHead,cloneTail,temp->data);
            temp=temp->next;
        }
        
        //2 clonenodes add in between orginal list
        Node* ogNode=head;
        Node* cloneNode=cloneHead;
        while(ogNode!=NULL && cloneNode!=NULL)
        {
            Node* next=ogNode->next;
            ogNode->next=cloneNode;
            ogNode=next;
            
            next=cloneNode->next;
            cloneNode->next=ogNode;
            cloneNode=next;
        }
        
        
        // 3 random pointer copy
        temp=head;
        while(temp!=NULL){
            if(temp->next!=NULL){
                temp->next->arb=temp->arb?
                temp->arb->next:temp->arb;
            }
           
            temp=temp->next->next;
        }
        
        
        //revert chnages done in step 2
        ogNode=head;
        cloneNode=cloneHead; 
        while(ogNode!=NULL && cloneNode!=NULL)
        {
            ogNode->next=cloneNode->next;
            ogNode=ogNode->next;
            
            if(ogNode!=NULL){
            cloneNode->next=ogNode->next;
            }
            cloneNode=cloneNode->next;;
        }
        
        // return ans;
        return cloneHead;;
    }

};

