// codestudio

// ip=
// (a+b)
// (a+c*b)+(c))

// op=
// No
// Yes,as last ")" is useless

// link=https://www.codingninjas.com/codestudio/problems/redundant-brackets_975473?leftPanelTab=1&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

// #include <bits/stdc++.h>
// #include <stack>
// bool findRedundantBrackets(string &s) {
//   stack<char> st;
//   for (int i = 0; i < s.length(); i++) {
//     char ch = s[i];

//     if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//       st.push(ch);
//     } else {
//       // ch ya to ')' hai ya lowercase
//       if (ch == ')') {
//         bool isRedundant = true;

//         while (st.top() != '(') {
//           char top = st.top();
//           if (top == '+' || top == '-' || top == '*' || top == '/') {
//             isRedundant = false;
//           }
//           st.pop();
//         }
//         if (isRedundant == true) {
//           return true;
//         }
//         st.pop();
//       }
//     }
//   }
//   return false;
// }

