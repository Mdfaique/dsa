// codestudio

// ip=2 1 4 3

// op=1 -1 3 -1

// For the first test case : 
// 1) For ARR [1] = 2 ,  the next smaller element is 1. 
// 2) For ARR [2] = 1 ,  the next smaller element is -1 as no element in the array has value smaller than 1.
// 3) For ARR [3] = 4 ,  the next smaller element is 3.
// 4) For ARR [4] = 3 ,  the next smaller element is -1 as no element exists in the right of it.
// Hence, we will return the array [ 1, -1, 3, -1] in this case.


// link=https://www.codingninjas.com/codestudio/problems/next-smaller-element_1112581?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

// algo=we start traversing from right to left 

// #include <stack>
// vector<int> nextSmallerElement(vector<int> &arr, int n) {
//   // Write your code here.
//   stack<int> s;
//   s.push(-1);
//   vector<int> ans(n);
//   for (int i = n - 1; i >= 0; i--) {
//     int curr = arr[i];
//     while (s.top() >= curr) {
//       s.pop();
//     }
//     // ans is stack ka top
//     ans[i] = s.top();
//     s.push(curr);
//   }
//   return ans;
// }