// link=https://www.codingninjas.com/studio/problems/h_920474?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar


// void inOrder(TreeNode *root1, vector<int> &sorted1) {
//   if (root1 == NULL)
//     return;

//   inOrder(root1->left, sorted1);
//   sorted1.push_back(root1->data);
//   inOrder(root1->right, sorted1);
// }
// vector<int> mergeBST(TreeNode *root1, TreeNode *root2) {
//   // Write your code here.
//   vector<int> sorted1;
//   vector<int> sorted2;
//   vector<int> ans;
//   inOrder(root1, sorted1);
//   inOrder(root2, sorted2);
//   int i = 0;
//   int j = 0;
//   while (i < sorted1.size() && j < sorted2.size()) {
//     if (sorted1[i] < sorted2[j]) {
//       ans.push_back(sorted1[i]);
//       i++;
//          } 
//     else {
//       ans.push_back(sorted2[j]);
//       j++;
//            }
//     }

//     while(i < sorted1.size()){
//       ans.push_back(sorted1[i]);
//       i++;
//       }
//     while(j < sorted2.size()){
//       ans.push_back(sorted2[j]);
//       j++;
//       }
//       return ans;
// }