// gfg

// Input:
// n = 4, m = 4
// M[][] = {{0 1 1 0},
//          {1 1 1 1},
//          {1 1 1 1},
//          {1 1 0 0}}
// Output: 8
// Explanation: For the above test case the
// matrix will look like
// 0 1 1 0
// 1 1 1 1
// 1 1 1 1
// 1 1 0 0
// the max size rectangle is 
// 1 1 1 1
// 1 1 1 1
// and area is 4 *2 = 8.

// link=https://practice.geeksforgeeks.org/problems/max-rectangle/1

// lecture 56 concept used


// T.C=O(n*m)
// S.C=O(m);

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
  
   vector<int>nextSmallerElement(int* arr,int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--) {
            int curr = arr[i];
            while (s.top()!=-1 && arr[s.top()] >= curr) 
            // s.top() now holds index isliye arr[s.top] kra
            {
            s.pop();
            }
            // ans is stack ka top
            ans[i] = s.top();
            s.push(i);
            // pushing index
        }
        return ans;

}

vector<int>prevSmallerElement(int* arr,int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            int curr = arr[i];
            while (s.top()!=-1 && arr[s.top()] >= curr) {
            s.pop();
            }
            // ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;

}
    int largestRectangleArea(int* heights,int n) {
        // int n=heights.size();
        
        vector<int> next(n);
        next=nextSmallerElement(heights,n);
        
        vector<int> prev(n);
        prev=prevSmallerElement(heights,n);
        
        int area=INT_MIN;
        
        for(int i=0;i<n;i++){
            int l=heights[i];
           

            if(next[i]==-1){
                next[i]=n;
            }
             int b=next[i]-prev[i]-1;
            int newArea=l*b;
            area=max(area,newArea);
        }
        return area;
        
    }

    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        // for area of 1st row
        int area=largestRectangleArea(M[0],m);
        
        // for remaining row
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                // row update by adding prev row's value
                if(M[i][j]!=0)
                M[i][j]=M[i][j]+M[i-1][j];
                else M[i][j]=0;
            }
            
            // entire row is updated now
            area=max(area,largestRectangleArea(M[i],m));
        }
        return area;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends