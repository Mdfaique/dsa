// link=https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

#include <bits/stdc++.h>
using namespace std;


// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> s;
    queue<int> ans;
    if(q.size()== k){
        while(q.size()!=0){
            s.push(q.front());
            q.pop();
        }
        
       while(!s.empty()){
           ans.push(s.top());
           s.pop();
       }
        return ans;
    }
    else{
        int count = 0;
        while(count < k){
            s.push(q.front());
            q.pop();
            count++;
        }
         while(!s.empty()){
           ans.push(s.top());
           s.pop();
       }
       while(q.size() != 0){
            ans.push(q.front());
            q.pop();
        }
         return ans;
    }
   
}