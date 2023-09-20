// link=https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

// Input:
// n = 4
// arr[] = {4, 3, 2, 6}
// Output: 
// 29
// Explanation:
// We can connect the ropes in following ways.
// 1) First connect ropes of lengths 2 and 3.
// Which makes the array {4, 5, 6}. Cost of
// this operation 2+3 = 5. 
// 2) Now connect ropes of lengths 4 and 5.
// Which makes the array {9, 6}. Cost of
// this operation 4+5 = 9.
// 3) Finally connect the two ropes and all
// ropes have connected. Cost of this 
// operation 9+6 =15
// Total cost for connecting all ropes is 5
// + 9 + 15 = 29. This is the optimized cost
// for connecting ropes. 


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long ,vector<long long>, greater<long long>> pq;
        long long sum = 0;
        for(long long i=0;i<n;i++){
            pq.push(arr[i]);
        }
        

        while( pq.size()>1){
            long long num1=pq.top();
            pq.pop();
    
            long long num2=pq.top();
            pq.pop();
            
            long long tempS=num1+num2;
            sum += tempS;
            
            pq.push(tempS);
        }
        
        return sum;
    }
};

// 56:34
