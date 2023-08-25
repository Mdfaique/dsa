// link=https://practice.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1

// Input:
// k=1 
// node=3
//       1
//     /   \
//     2     3

// Output:
// 1
// Explanation:
// K=1 and node=3 ,Kth ancestor of node 3 is 1.

#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(){
        data = 0;
        left = right = NULL;
    }
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

Node* solve(Node* root,int &k,int node){
    if(root==NULL)return NULL;
    if(root->data==node){
        return root;
    }
    
    Node *leftAns=solve(root->left,k,node);
    Node *rightAns=solve(root->right,k,node);
    
    if(leftAns!=NULL && rightAns==NULL)
    {
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        return leftAns;
    }
    
    if(leftAns==NULL && rightAns!=NULL){
         k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        return rightAns;
    }
    
    return NULL;
}


int kthAncestor(Node *root, int k, int node)
{
    // Code here
    Node *ans=solve(root,k,node);
    if(ans==NULL || ans->data==node) return -1;
    else return ans->data;
}
