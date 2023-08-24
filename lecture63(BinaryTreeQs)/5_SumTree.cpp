// link=https://practice.geeksforgeeks.org/problems/sum-tree/1

// Input:
//     3
//   /   \    
//  1     2

// Output: 1
// Explanation:
// The sum of left subtree and right subtree is
// 1 + 2 = 3, which is the value of the root node.
// Therefore,the given binary tree is a sum tree.

// T.C=O(N)
// S.C=o(N)

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left, * right;
}; 

// Should return true if tree is Sum Tree, else false
class Solution
{
    public:
    pair<bool,int> isSumTreeFast(Node* root){
        
        // base case
        if(root == NULL){
         pair<bool,int> p=make_pair(true,0);
         return p;
        }
        
        if(root->left ==NULL && root->right == NULL){
          pair<bool,int> p=make_pair(true,root->data);
          return p;
        }
        
        pair<bool,int> leftAns = isSumTreeFast(root->left);
        pair<bool,int> rightAns = isSumTreeFast(root->right);
        
        bool isLeftSumTree=leftAns.first;
        bool isRightSumTree=rightAns.first;
        
        bool condition=root->data == leftAns.second+rightAns.second;
        
        pair<bool,int> ans;
        
        if(isLeftSumTree && isRightSumTree && condition){
            ans.first=true;
            ans.second=root->data + leftAns.second+rightAns.second;
        }
        else{
            ans.first=false;
        }
        
        return ans;

    }
    bool isSumTree(Node* root)
    {
         // Your code here
         return isSumTreeFast(root).first;
    }
};

// finish