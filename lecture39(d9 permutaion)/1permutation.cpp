// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
// leet code solvd
// class Solution {
// private:
// void solve(vector<int> nums,int index,vector<vector<int>> &ans)
// {
//     if(index>=nums.size()) return ans.push_back(nums);

//     for(int i=index;i<nums.size();i++)
//     {
//         swap(nums[index],nums[i]); //abc
//         solve(nums,index+1,ans);//abc index at b (acb)
//         //backtrack
//         swap(nums[index],nums[i]); //returns chnaged nums to og form abc 
//     }
// }
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         int index=0;
//         vector<vector<int>> ans;
//         solve(nums,index,ans);
//         return ans;
        
//     }
// };