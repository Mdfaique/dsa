// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]
// leetcode solvd
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int row=matrix.size();
//         int col=matrix[0].size();
//         int count=0;
//         int total=row*col;
//         int strtrow=0;
//         int endrow=row-1;
//         int strtcol=0;
//         int endcol=col-1;
//         vector<int> ans;
        
//         while(count<total)
//         {
//             //strt row
//             for(int index=strtcol;count<total &&  index<=endcol;index++)
//             {
//                 ans.push_back(matrix[strtrow][index]);
//             count++;
//             }
//             strtrow++;

//             //ending col
//              for(int index=strtrow;count<total &&  index<=endrow;index++)
//             {
//                 ans.push_back(matrix[index][endcol]);
//             count++;
//             }
//             endcol--;

//             //endrow
//              for(int index=endcol;count<total &&  index>=strtcol;index--)
//             {
//                 ans.push_back(matrix[endrow][index]);
//             count++;
//             }
//             endrow--;
//             //strtcol
//             for(int index=endrow;count<total&&index>=strtrow;index--)
//             {
//                 ans.push_back(matrix[index][strtcol]);
//                 count++;
//             }
//             strtcol++;
//         }
//         return ans;
//     }
// };