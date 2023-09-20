// Link=https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

// Input:
// N = 6
// arr[] = 7 10 4 3 20 15
// K = 3
// Output : 7
// Explanation :
// 3rd smallest element in the given 
// array is 7.

// T.C=O(N(logN))
// S.C=O(N)

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> pq;
        
        for(int i=0; i<=r ; i++){
            if(i<k) pq.push(arr[i]);
            if(i>=k){
                if(arr[i]<pq.top()){
                pq.pop();
                pq.push(arr[i]);
             }
            }
        }
        
        
        return pq.top();
    }
};


