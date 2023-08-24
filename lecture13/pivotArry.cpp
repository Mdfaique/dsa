   // leet code 
#include<vector>
#include<iostream>
using namespace std;
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int left=0;
        int ans=0;
        for (i=0;i<n;i++)
        {
            ans=ans+nums[i];
        }
        for(i=0;i<n;i++)
        {
            if(left==ans-left-nums[i])
            {
                return i;
            }
            left=left+nums[i];
            
        }
        return -1;
    }
    
