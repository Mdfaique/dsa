// link=https://practice.geeksforgeeks.org/problems/construct-tree-1/1

// Input:
// N = 6
// inorder[] = {3 1 4 0 5 2}  LNR
// preorder[] = {0 1 3 4 2 5} NLR
// Output: 3 4 1 5 2 0
// Explanation: The tree will look like
//        0
//     /     \
//    1       2
//  /   \    /
// 3    4   5


#include <bits/stdc++.h>
using namespace std;

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
     int findposition(int element , int in[] , int start , int end)
    {
        for(int i = start ; i <= end ; i++)
        {
            if(in[i] == element)
            {
                return i;
            }
        }
        return -1;
    }
    
    Node* solve(int in[],int pre[], int n, int& preorderindex , int inorder_start , int  inorder_end)
    {
        if(preorderindex >= n || inorder_start > inorder_end)
        {
            return NULL;
        }
        
        int element = pre[preorderindex];
        Node* root = new Node(element);
        
        int position = findposition(element,in ,inorder_start , inorder_end);
        
        preorderindex++;
        root->left = solve(in,pre,n,preorderindex, inorder_start , position - 1);
        root-> right = solve(in , pre , n , preorderindex, position + 1 , inorder_end);
        
        
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        int preorderindex = 0;
        
        Node* temp = solve(in,pre,n, preorderindex, 0 , n-1);
        
        return temp;
    }
};

// 22:17