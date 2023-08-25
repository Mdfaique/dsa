// link=https://practice.geeksforgeeks.org/problems/maximum-sum-of-non-adjacent-nodes/1

// Input:
//         1
//       /   \
//      2     3
//     /     /  \
//    4     5    6
// Output: 16
// Explanation: The maximum sum is sum of
// nodes 1 4 5 6 , i.e 16. These nodes are
// non adjacent.

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
class Solution{
  public:
  
    pair<int,int> solve(Node* root){
        if(root==NULL){
            pair<int,int> p=make_pair(0,0);
            return p;
        }
        
        pair<int,int> left=solve(root->left);
        pair<int,int> right=solve(root->right);
         
        pair<int,int> res;
        
        res.first=root->data+left.second+right.second;
        res.second= max(left.first,left.second)+max(right.first,right.second);
        
        return res;
    }
    
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) 
    {
        // Add your code here
        pair<int,int> ans=solve(root);
        return max(ans.first,ans.second);
    }
};