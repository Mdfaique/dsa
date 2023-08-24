// ip  1 2
//     3 4
// op  1 3 4 2
// codestudio solvd    
// #include <bits/stdc++.h> 
// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     //Write your code here
//     vector<int> ans;
//     for(int col=0;col<mCols;col++)
//     {
//         if(col&1)//odd cols
//         {
//             for(int row=nRows-1;row>=0;row--)
//               ans.push_back(arr[row][col]);  
//         }
//     else //0 and even colls
//     {
//         for(int row=0;row<nRows;row++)
//         {
//             ans.push_back(arr[row][col]);
//         }
//     }
//     }
//     return ans;
// }