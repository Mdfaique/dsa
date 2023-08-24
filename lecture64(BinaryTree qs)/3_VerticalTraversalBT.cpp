// link=https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1

// Input:
//            1
//          /   \
//        2       3
//      /   \   /   \
//    4      5 6      7
//               \      \
//                8      9           
// Output: 
// 4 2 1 5 6 3 8 7 9 


#include <bits/stdc++.h>
using namespace std;
// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        map<int,vector<int>> nodes; //first int =hd ,and vector<int> is for list of nodes
        queue<pair<Node*,int>> q; //queue me pair  hoga node ka aur horizontal distance(hd)
        vector<int> ans;
        
        if(root==NULL) return ans;
        
        q.push(make_pair(root,0)); //0 kyuki hd =0 
        
        while(!q.empty()){
            pair<Node*,int> temp= q.front(); //front data nikala queue se
            q.pop();
            Node* frontNode=temp.first; //node nikala
            int hd=temp.second;   // int hd=temp.second;
            
            
            nodes[hd].push_back(frontNode->data);
            if(frontNode->left) q.push(make_pair(frontNode->left,(hd-1)));
            if(frontNode->right) q.push(make_pair(frontNode->right,(hd+1)));
        }
            for(auto i:nodes){
                //  i =<int,vector<int>> , i.second me gaye
                for(auto j:i.second){
                    // j= vector<int> 
                    ans.push_back(j);
                }
            }
            return ans;
    }
};
