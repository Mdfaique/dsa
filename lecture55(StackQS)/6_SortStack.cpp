// codestudio

// sorts a stack

// link=https://www.codingninjas.com/codestudio/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=3&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

// T.C=O[N^2]
// S.C=?

// l-55,54 min


// #include <bits/stdc++.h>
// void sortedInsert(stack<int> &stack, int num) {
//   if (stack.empty() || (!stack.empty() && stack.top() <= num)) {
//     stack.push(num);
//     return;
//   }
//   int n=stack.top();
//   stack.pop();

//   sortedInsert(stack,num);

//   stack.push(n);
// }
// void sortStack(stack<int> &stack) {
//   // Write your code here
//   // base case
//   if (stack.empty()) {
//     return;
//   }
//   int num = stack.top();
//   stack.pop();

//   // recursive call
//   sortStack(stack);

//   sortedInsert(stack, num);
// }