// unsolved
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]
// leetcode not solved
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int a = 0;
//         int b = matrix.size() - 1;
//         while(a < b){
//             for(int i = 0;i < b - a; i++){
//                 swap(matrix[a][a + i], matrix[a + i][b]);
//                 swap(matrix[a][a + i], matrix[b][b - i]);
//                 swap(matrix[a][a + i], matrix[b - i][a]);
//             }
//             a++;
//             b--;
//         }
//     }
// };