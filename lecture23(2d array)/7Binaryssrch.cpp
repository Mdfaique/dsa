// leet code solvd
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row=matrix.size();
//         int col=matrix[0].size();
//         int strt=0;
//         int end=row*col-1;
//         int mid=strt+(end-strt)/2;
//         while(strt<=end)
//         {
//             int element=matrix[mid/col][mid%col];

//             if(element==target)return 1;
//             else if(element>target) end=mid-1;
//             else if(element<target) strt=mid+1;
//             mid=strt+(end-strt)/2;
//         }
//         return 0;

        
//     }
// };