// gfg

// Input:
// N = 3
// M[][] = {{0 1 0},
//          {0 0 0}, 
//          {0 1 0}}
// Output: 1
// Explanation: 0th and 2nd person both
// know 1. Therefore, 1 is the celebrity. 

// link=https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

// T.C=O(N);




// class Solution
// {
// public:
//     // Function to find if there is a celebrity in the party or not.
//     bool knows(vector<vector<int>> &M, int a, int b)
//     {
//         if (M[a][b] == 1)
//             return true;
//         else
//             return false;
//     }
//     int celebrity(vector<vector<int>> &M, int n)
//     {
//         // code here
//         stack<int> s;

//         for (int i = 0; i < n; i++)
//         {
//             s.push(i);
//         }
//         while (s.size() > 1)
//         {
//             int a = s.top();
//             s.pop();

//             int b = s.top();
//             s.pop();

//             if (knows(M, a, b))
//             {
//                 s.push(b);
//             }
//             else
//             {
//                 s.push(a);
//             }
//         }

//         int candidate = s.top();
// 
//         // single element in stak is potential celebrity
//         bool rowCheck = false;
//         int zeroCount = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (M[candidate][i] == 0)
//                 zeroCount++;
//         }

//         // all zeroes
//         if (zeroCount == n)
//         {
//             rowCheck = true;
//         }

//         bool colCheck = false;
//         int oneCount = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (M[i][candidate] == 1)
//             {
//                 oneCount++;
//             }
//         }

//         if (oneCount == n - 1)
//         {
//             colCheck = true;
//         }

//         if (rowCheck == true && colCheck == true)
//         {
//             return candidate;
//         }
//         else
//         {
//             return -1;
//         }
//     }
// };