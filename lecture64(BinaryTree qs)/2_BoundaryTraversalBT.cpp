// link=https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

// Input:
//             1
//            /
//           2
//         /  \
//        4    9
//      /  \    \
//     6    5    3
//              /  \
//             7     8

// Output: 1 2 4 6 5 7 8

// T.C & S.C =O(N) & Height of tree



#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution {
public:
    void traverseLeft(Node *root,vector<int> &ans){
        // base case
        if(root==NULL || (root->left==NULL && root->right==NULL)) return;
        ans.push_back(root->data);
        if(root->left) traverseLeft(root->left,ans);
        else traverseLeft(root->right,ans); 
    }
    
    void traverseLeaf(Node *root,vector<int> &ans){
        // base case
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        
        traverseLeaf(root->left,ans);
        traverseLeaf(root->right,ans);
    }
    
    void traverseRight(Node *root,vector<int> &ans){
        if(root==NULL || (root->left==NULL && root->right==NULL)) return;
        
         if(root->right) traverseRight(root->right,ans);
         else traverseRight(root->left,ans);
         
        //  wapas aagye
        ans.push_back(root->data);
    }
    
    
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root==NULL)return ans;
        
        ans.push_back(root->data);
        
        // left part print/store
        traverseLeft(root->left,ans);
        
        // traverse leaf nodes
        // left subtree
        traverseLeaf(root->left,ans);
        // right sub tree
        traverseLeaf(root->right,ans);
        
        // traverse right part
        traverseRight(root->right,ans);
        
        return ans;
    }
};

