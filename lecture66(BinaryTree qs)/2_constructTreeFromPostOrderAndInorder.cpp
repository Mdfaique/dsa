// link=https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1

// Input:
// N = 8
// in[] = 4 8 2 5 1 6 3 7  LNR
// post[] =8 4 5 2 6 7 3 1 LRN
// Output: 1 2 4 8 5 3 6 7
// Explanation: For the given postorder and
// inorder traversal of tree the  resultant
// binary tree will be
//            1
//        /      \
//      2         3
//    /  \      /  \
//   4    5    6    7
//    \
//      8

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node()
    {
        data = 0;
        left = right = NULL;
    }
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

class Solution
{
public:
    int findposition(int element, int in[], int start, int end)
    {
        for (int i = start; i <= end; i++)
        {
            if (in[i] == element)
            {
                return i;
            }
        }
        return -1;
    }

    Node *solve(int in[], int post[], int n, int &postOrderindex, int inorder_start, int inorder_end)
    {
        if (postOrderindex < 0 || inorder_start > inorder_end)
        {
            return NULL;
        }

        int element = post[postOrderindex];
        Node *root = new Node(element);

        int position = findposition(element, in, inorder_start, inorder_end);

        postOrderindex--;
        root->right = solve(in, post, n, postOrderindex, position + 1, inorder_end);
        root->left = solve(in, post, n, postOrderindex, inorder_start, position - 1);

        return root;
    }

    // Function to return a tree created from postorder and inoreder traversals.
    Node *buildTree(int in[], int post[], int n)
    {
        // Your code here
        int postOrderindex = n - 1;

        Node *temp = solve(in, post, n, postOrderindex, 0, n - 1);

        return temp;
    }
};
