// codestudio

// ip=[2,1,3]
// op=[3,1,2]

// link=https://www.codingninjas.com/codestudio/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

// T.C=O[N^2]


// void insertAtBottom(stack<int> &stack,int num){
//     // base case
//     if(stack.empty()){
//         stack.push(num);
//         return;
//     }

//     int n=stack.top();
//     stack.pop();

//     insertAtBottom(stack,num);
//     stack.push(n);

// }

// void reverseStack(stack<int> &stack) {
//     // Write your code here
//     // base case
//     if(stack.empty()){
//         return;  
//     }
//     int num=stack.top();
//     stack.pop();

//     // recursive call
//     reverseStack(stack);

//     insertAtBottom(stack,num);
// }