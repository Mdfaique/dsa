// link=https://practice.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1

// Input  : 
// n = 4 m = 3
// a[] = {10, 5, 6, 2}, 
// b[] = {12, 7, 9}
// Output : 
// {12, 10, 9, 2, 5, 7, 6}

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        priority_queue<int> pq;
        
        for(int i=0;i<n;i++){
            pq.push(a[i]);
        }
        
        for(int i=0;i<m;i++){
            pq.push(b[i]);
        }
        
        vector<int> ans;
        
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

