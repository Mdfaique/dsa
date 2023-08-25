// link=https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1

// Input: 
//         4        
//        / \       
//       2   5      
//      / \ / \     
//     7  1 2  3    
//       /
//      6
// Output: 13

// self solved


//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
class Solution
{
public:
    
    pair<int,int> solve(Node* root){
        
       if(root==NULL) return make_pair(0,0);
       
       int currentNode=root->data;
       
       pair<int,int> left=solve(root->left);
       pair<int,int> right=solve(root->right);
       
       int sumLeft=left.first;
       int countLeft=left.second;
       
       int sumRight=right.first;
       int countRight=right.second;
       int sum;
       int counts;
       if(countLeft>countRight){
            sum=sumLeft+currentNode;
            counts=countLeft+1;
       }
       else if(countRight>countLeft){
            sum=sumRight+currentNode;
            counts=countRight+1;
       }
       else 
       {
            int sumL=sumLeft+currentNode;
            int sumR=sumRight+currentNode;
            sum=max(sumL,sumR);
            counts=countLeft+1;
       }
        
        return make_pair(sum,counts);    
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        pair<int,int> ans=solve(root);
        return ans.first;
    }
};

