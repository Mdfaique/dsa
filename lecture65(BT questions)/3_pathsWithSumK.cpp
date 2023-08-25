// link=https://practice.geeksforgeeks.org/problems/k-sum-paths/1

// Input: 
// Tree = 
//            1
//         /     \
//       3        -1
//     /   \     /   \
//    2     1   4     5                        
//         /   / \     \                    
//        1   1   2     6    
// K = 5                    
// Output: 8

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
   void helper(Node* root,int k,int prev,int &ans,unordered_map<int,int>&mp){
        if(root==NULL){
            return;
        }
        int curr=prev+root->data;
        if(mp.find(curr-k)!=mp.end()){
            ans+=mp[curr-k];
        }
        if(curr==k){
            ans++;
        }
        mp[curr]++;
        helper(root->left,k,curr,ans,mp);
        helper(root->right,k,curr,ans,mp);
        mp[curr]--;
    }
  
    int sumK(Node *root,int k)
    {
        // code here 
        int ans=0;
        unordered_map<int,int>mp;
        helper(root,k,0,ans,mp);
        return ans;
    }
};