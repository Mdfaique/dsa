// link=https://www.codingninjas.com/studio/problems/k-th-largest-sum-contiguous-subarray_920398?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

#include<bits/stdc++.h>
using namespace std;
#include <queue>
int getKthLargest(vector<int> &arr, int k)
{
	//	Write your code here.
	priority_queue<int , vector<int> ,greater<int> > pq;
	int sum;
	for(int i=0;i<arr.size();i++){
		 sum =0;
		 for(int j=i;j<arr.size();j++){
			 sum += arr[j];

			 if(pq.size()<k){
				 pq.push(sum);
			 }
			 else{
				 if(sum> pq.top()){
					 pq.pop();
					 pq.push(sum);
				 }
			 }
		 }
	}
	 return pq.top();
}