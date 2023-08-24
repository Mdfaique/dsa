// codestudio

// ip=
// {{{}
// {{}{}}

// op=
// 1,as at index 2,after switchng "{" exprssion becomes valid,so count is 1.
// 0

// link=https://www.codingninjas.com/codestudio/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTab=3&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

// #include <bits/stdc++.h>
// int findMinimumCost(string str) {
//   // Write your code here
//   // odd condition
//   if (str.length() % 2 == 1) {
//     return -1;
//   }

//   stack<char> s;
//   for (int i = 0; i < str.length(); i++) {
//     char ch = str[i];
//     if (ch == '{') {
//       s.push(ch);
//     } else {
//       // '}' base case
//       if (!s.empty() && s.top() == '{') {
//         s.pop();
//       } else {
//         s.push(ch);
//       }
//     }
//   }
//   // stack contains invalid expression
//   int a = 0, b = 0;

//   while (!s.empty()) {
//     if (s.top() == '{') {
//       a++;
//     } else {
//       b++;
//     }
//     s.pop();
//   }

//   int ans = (a + 1) / 2 + (b + 1) / 2;
//   return ans;
// }
