// link=https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1

// Input:
//        10
//      /   \
//     20   30 
//   /   \
//  40   60
// Output: 0

// T.C=O(N)
// S.C=O(N)

#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
  public:
  
    int countNodes(struct Node *root){
        if(root == NULL)  return 0;
        
        int ans = 1 + countNodes(root->left) + countNodes(root->right);
        
        return ans;
    }
    
    // compelete binary tree, means it will always have either leaf nodes at end ,or left node only at end , a parent node with only right child can't exist ,if exist then it's not complete binary tree
// eg  //        10
      //      /   \
     //     20   30 
    //   /   \
   // 40   60
//    if only 60 existed it would be not be CBT but 40 can exist

    bool isCBT(struct Node* root,int index , int cnt){
        
        if(root==NULL) return true;
        
        if(index >= cnt) return false;
        
        else{
            bool left=isCBT(root->left,2*index + 1,cnt);
            bool right=isCBT(root->right,2*index + 2,cnt);
            return (left && right);
        }
    }

    
    
    bool isMaxOrder(struct Node* root){
        if(root->left ==NULL && root->right == NULL) return true;
        
        if(root->right == NULL){
            return (root->data > root->left->data);
        }
        
        else {
            bool left = isMaxOrder(root->left);
            bool right=isMaxOrder(root->right);
            
            return (left && right && (root->data > root->left->data && root->data > root->right->data));
        }
    }
    
    bool isHeap(struct Node* tree) {
        // code here
        int index=0;
        int totalCount=countNodes(tree);
        
        if(isCBT(tree,index,totalCount) && isMaxOrder(tree)){
            return true;
        }
        
        else return false;
    }
};

// 38:29
