//leetcode solved
//Input: nums = [1,2,3]
//Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
// class Solution {
// public:
// void solve(vector<int>& nums,int index,vector<int> output,vector<vector<int>> &ans)
// {
//     if(index>=nums.size())
//     {
//         ans.push_back(output);
//         return;
//     }

//     //exclude
//     solve(nums,index+1,output,ans);

//     //include
//     int element=nums[index];
//     output.push_back(element);
//     solve(nums,index+1,output,ans);
// }
//     vector<vector<int>> subsets(vector<int>& nums) {
//         int index=0;
//         vector<vector<int>> ans;
//         vector<int> output;
//         solve(nums,index,output,ans);
//         return ans;
        
//     }
// };