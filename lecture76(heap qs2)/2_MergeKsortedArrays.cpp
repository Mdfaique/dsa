// link=https://www.codingninjas.com/studio/problems/merge-k-sorted-arrays_975379?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

#include<bits/stdc++.h>
using namespace std;
#include <queue>

#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    priority_queue<int ,vector<int>, greater<int> > pq;

    for(int i=0;i<kArrays.size();i++){
        for(int j=0;j<kArrays[i].size();j++){
            pq.push(kArrays[i][j]);
        }
    }

    vector<int> ans;
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;
}
