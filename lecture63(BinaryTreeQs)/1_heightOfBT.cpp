// link=https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1

// T.C and S.C = O(N);

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node == NULL){
            return 0;
        }
        
        int left=height(node->left);
        int right=height(node->right);
        
        int ans=max(left,right)+1;
        return ans;
    }
};


