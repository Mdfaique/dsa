// link=https://practice.geeksforgeeks.org/problems/burning-tree/1

// Input:      
//           1
//         /   \
//       2      3
//     /  \      \
//    4    5      6
//        / \      \
//       7   8      9
//                    \
//                    10
// Target Node = 8
// Output: 7
// Explanation: If leaf with the value 
// 8 is set on fire. 
// After 1 sec: 5 is set on fire.
// After 2 sec: 2, 7 are set to fire.
// After 3 sec: 4, 1 are set to fire.
// After 4 sec: 3 is set to fire.
// After 5 sec: 6 is set to fire.
// After 6 sec: 9 is set to fire.
// After 7 sec: 10 is set to fire.
// It takes 7s to burn the complete tree.

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
    // create mapping
    // return Target Node
    Node *creatParentMapping(Node *root, int target, map<Node *, Node *> &nodeToParent)
    {
        Node *res = NULL;

        queue<Node *> q;
        q.push(root);
        nodeToParent[root] = NULL;

        while (!q.empty())
        {
            Node *front = q.front();
            q.pop();

            if (front->data == target)
            {
                res = front;
            }

            if (front->left)
            {
                nodeToParent[front->left] = front;
                q.push(front->left);
            }

            if (front->right)
            {
                nodeToParent[front->right] = front;
                q.push(front->right);
            }
        }
        return res;
    }

    void burnTree(Node *root, map<Node *, Node *> &nodeToParent, int &ans)
    {
        map<Node *, bool> visited;
        queue<Node *> q;

        q.push(root);
        visited[root] = true;

        while (!q.empty())
        {
            int size = q.size();
            bool flag = 0;
            for (int i = 0; i < size; i++)
            {
                // process aas paas wali nodes
                Node *front = q.front();
                q.pop();

                if (front->left && !visited[front->left])
                {
                    flag = 1;
                    q.push(front->left);
                    visited[front->left] = true;
                }

                if (front->right && !visited[front->right])
                {
                    flag = 1;
                    q.push(front->right);
                    visited[front->right] = true;
                }

                if (nodeToParent[front] && !visited[nodeToParent[front]])
                {
                    flag = 1;
                    q.push(nodeToParent[front]);
                    visited[nodeToParent[front]] = true;
                }
            }
            if (flag == 1)
                ans++;
        }
    }
    int minTime(Node *root, int target)
    {
        // Your code goes here
        int ans = 0;
        map<Node *, Node *> nodeToParent;
        Node *targetNode = creatParentMapping(root, target, nodeToParent);

        burnTree(targetNode, nodeToParent, ans);

        return ans;
    }
};
