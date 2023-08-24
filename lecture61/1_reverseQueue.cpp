// link=https://practice.geeksforgeeks.org/problems/queue-reversal/1

// 2 approaches using stack and recursion

#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        queue<int> r;
        stack<int> s;
       while(!q.empty()){
           int frontElement=q.front();
           q.pop();
           s.push(frontElement);
           }
           while(!s.empty()){
           int topElement=s.top();
           s.pop();
           q.push(topElement);
           }
       return q;
    }
};

// APPROACH 2--------------------------------------
class Solution
{
    public:
     void reverse(queue<int> &q){
         if(q.empty()){
             return;
         }
         int frnt=q.front();
         q.pop();
         reverse(q);
         q.push(frnt);
          
     }
    
    queue<int> rev(queue<int> q)
    {
        // add code here.
        reverse(q);
        return q;
    }
};
