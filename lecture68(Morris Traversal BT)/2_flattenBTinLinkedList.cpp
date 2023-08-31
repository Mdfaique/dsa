// link=https://practice.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1

// Input : 
//           1
//         /   \
//        2     5
//       / \     \
//      3   4     6
// Output :
// 1 2 3 4 5 6 
// Explanation: 
// After flattening, the tree looks 
// like this
//     1
//      \
//       2
//        \
//         3
//          \
//           4
//            \
//             5
//              \
//               6 
// Here, left of each node points 
// to NULL and right contains the 
// next node in preorder.The inorder 
// traversal of this flattened tree 
// is 1 2 3 4 5 6.

// T.C=O(N)
// S.C=O(1)

#include<bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	Node *left, *right;
};

class Solution
{
    public:
    void flatten(Node *root)
    {
        //code here 
        Node *curr=root;
        while(curr!=NULL){
            if(curr->left){
                Node *pred=curr->left;
                while(pred->right){
                    pred=pred->right;
                }
                pred->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
            }
            curr=curr->right;
        }
    }
};
