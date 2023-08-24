// link=https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

// Method 1 T.C= O(N^2);
// Method 2 T.C= O(N);

// S.C= O(N);

// Input:
//          10
//         /   \
//       20    30
//     /   \ 
//    40   60
// Output: 4
// From 60->20->10->30 = 4

// Method 1------------------------------------

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
    // Function to return the diameter of a Binary Tree.
    int height(struct Node *node)
    {
        // code here
        if (node == NULL)
        {
            return 0;
        }

        int left = height(node->left);
        int right = height(node->right);

        int ans = max(left, right) + 1;
        return ans;
    }

    int diameter(Node *root)
    {
        // Your code here
        if (root == NULL)
            return 0;

        int leftDiameter = diameter(root->left); // agar left/right side me hi longest chain ho to uske liye
        int rightDiameter = diameter(root->right);
        int oneSideMaxDia = max(leftDiameter, rightDiameter);

        int leftMaxi = height(root->left); // agar left aur right dono ko milake longest chain banri ho
        int rightMaxi = height(root->right);
        int leftRightCombinedDia = (leftMaxi + 1) + rightMaxi;

        return max(oneSideMaxDia, leftRightCombinedDia);
    }
};

// End Method 1---------------------------------------

// method 2---------------------------------

class Solution
{
public:
    pair<int, int> diameterFast(Node *root)
    {
        // base case
        if (root == NULL)
        {
            pair<int, int> p = make_pair(0, 0); // both dia and height are 0 respectively
            return p;
        }
        pair<int, int> left = diameterFast(root->left);
        pair<int, int> right = diameterFast(root->right);

        int leftDiaOnly = left.first; // fetching dia only from left/right
        int rightDiaOnly = right.first;
        int heightCombinedLeftnRight = left.second + right.second + 1;
        // fetching height combined so that dia can be calculated

        pair<int, int> ans;
        ans.first = max(leftDiaOnly, max(rightDiaOnly, heightCombinedLeftnRight));
        // taking only max dia if from leftside,right side or both combined

        ans.second = max(left.second, right.second) + 1;
        // calculating max height and storing;

        return ans;
    }

    int diameter(Node *root)
    {
        // Your code here
        return diameterFast(root).first;
        // in first we stored diameter
    }
};
// End Method2--------------------------