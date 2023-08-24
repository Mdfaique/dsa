// codestudio

// ip=1 2 3 4 5
// op=1 2 4 5

// link=https://www.codingninjas.com/codestudio/problems/delete-middle-element-from-stack_985246?leftPanelTab=1&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

// Recursion used

// #include <bits/stdc++.h> 
// void solve(stack<int>&inputStack,int count ,int size){
//    if(count==size/2){
//       inputStack.pop();
//       return;
//    }

//    int num=inputStack.top();
//    inputStack.pop();

//    // recusrive call
//    solve(inputStack,count+1,size);
//    // places backs the num of top after poping mid element 
//    // eg 1-2-3 {3=num} removes 2 and put 3 back;
//    inputStack.push(num);

// }
// void deleteMiddle(stack<int>&inputStack, int N){
	
//    // Write your code here
//    int count=0;
//    solve(inputStack,count,N);
   
// }