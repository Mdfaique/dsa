// link=https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1

// Left view of following tree is 1 2 4 8.

//           1
//        /     \
//      2        3
//    /     \    /    \
//   4     5   6    7
//    \
//      8   


// Two methods=Level order traversal and recursive 

// -------------Method1--------------------

#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

vector<int> leftView(Node *root)
{
   // Your code here
   map<int,int> m;
   queue<pair<Node*,int>> q;
   vector<int> ans;
   
   if(root==NULL) return ans;
   q.push(make_pair(root,0));
   
   while(!q.empty()){
       pair<Node*,int> temp=q.front();
       q.pop();
       
       Node* frontNode=temp.first;
       int lvl=temp.second;
       
       if(m.find(lvl)==m.end()){
           m[lvl]=frontNode->data;
       }
       
       if (frontNode->left)
                q.push(make_pair(frontNode->left, lvl + 1));
                
       if (frontNode->right)
                q.push(make_pair(frontNode->right, lvl + 1));
   }
   
   for(auto i:m){
       ans.push_back(i.second);
   }
   return ans;
   
}

//---------end Method1--------------------------

// Method2========================================

 void solve(Node* root, int lvl,vector<int> &ans){
    //  base case
    if(root==NULL)return;
    
    if(lvl==ans.size()){
        ans.push_back(root->data);
    }
    
    solve(root->left,lvl+1,ans);
    solve(root->right,lvl+1,ans);
 }

vector<int> leftView(Node *root)
{
   // Your code here
   int lvl=0;
   vector<int> ans;
   solve(root,lvl,ans);
   
   return ans;
}

// End Method2============================================