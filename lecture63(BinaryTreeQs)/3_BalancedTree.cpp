// link=https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

// T.C=O(N);
// S.C=O(N);

// Input:
//        10
//      /   \
//     20   30
//   /   \
//  40   60
// Output: 1
// Explanation: The max difference in height
// of left subtree and right subtree is 1.
// Hence balanced.

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
        left = right = NULL;
    }
};

class Solution
{
public:
    pair<bool, int> isBalancedFast(Node *root)
    {
        //  Your Code here
        if (root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }

        pair<bool, int> isLeftBalanced = isBalancedFast(root->left);
        pair<bool, int> isRightBalanced = isBalancedFast(root->right);

        bool leftAns = isLeftBalanced.first;
        bool rightAns = isRightBalanced.first;

        bool difference = abs(isLeftBalanced.second - isRightBalanced.second) <= 1;

        pair<bool, int> ans;
        ans.second = max(isLeftBalanced.second, isRightBalanced.second) + 1; // height cal and set

        if (leftAns && rightAns && difference)
        {
            ans.first = true;
        }
        else
        {
            ans.first = false;
        }
        return ans;
    }
    // Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        return isBalancedFast(root).first;
    }
};

// 43:55