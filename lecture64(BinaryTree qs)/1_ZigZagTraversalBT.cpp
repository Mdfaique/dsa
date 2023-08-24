// link=https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1

// Input:
//         1
//       /   \
//      2     3
//     / \   /  \
//    4   5 6    7
// Output:
// 1 3 2 4 5 6 7

// T.C=O(N)
// S.C=O(N)

#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> ans;
    	if(root==NULL) return ans;
    	
    	queue<Node*> q;
    	q.push(root);
    	
    	bool leftToRight=true;
    	
    	while(!q.empty()){
    	    int size=q.size();
    	    vector<int> tempAns(size);
    	   // level process
    	   for(int i=0;i<size;i++){
    	       Node* frontNode=q.front();
    	       q.pop();
    	       
    	       //normal insert or reverse insert
    	       int index=leftToRight ? i: size-i-1;
    	       tempAns[index]=frontNode->data;
    	       
    	       if(frontNode->left) q.push(frontNode->left);
    	       if(frontNode->right) q.push(frontNode->right);
    	   }
    	   
    	   //direction change krni h
    	   leftToRight=!leftToRight;
    	   for(auto i:tempAns) ans.push_back(i);
    	}
    	return ans;
    }
};

// 15:27
