// link=https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1

// Input :
//             8
//          /     \
//         3      10
//       /   \      \
//      1     6     14
//          /   \   /
//         4     7 13
// Output : 8 10 14 3 6 7 13 1 4

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left, * right;
}; 
void solve(Node* root, vector<int> &ans) {
    if(root == NULL) return;
    
    queue<Node*>q;
    q.push(root);
    
    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();
        while(temp) {
            ans.push_back(temp->data);
            if(temp->left) {
                q.push(temp->left);
            }
            temp = temp->right;
        }
    }
}

vector<int> diagonal(Node *root)
{
   // your code here
   vector<int> ans;
   if(root==NULL) return ans;
   
   solve(root,ans);
   return ans;
}