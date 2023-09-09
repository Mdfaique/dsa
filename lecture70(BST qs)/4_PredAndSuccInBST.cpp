// link=https://www.codingninjas.com/studio/problems/_893049?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1

// void solve(TreeNode *root,vector<int> &ans){
//     if(root==NULL)return;
//     solve(root->left,ans);
//     ans.push_back(root->data);
//     solve(root->right,ans);
// }


// pair<int, int> predecessorSuccessor(TreeNode *root, int key)
// {
//     // Write your code here.
//     vector<int> ans;
//     solve(root,ans);
//     pair<int,int> res;
//     res.first=-1;
//     res.second=-1;
//     int flag=0;
  

//     for(int i=0;i<ans.size();i++){
//        if(ans[i]>=key){
//          if(i==0){
//              if(ans[i]>key){
//                  flag=1;
//                  res.first=-1;
//                  res.second=ans[i];
//                  break;
//              } else {
//                flag = 1;
//                res.first = -1;
//                res.second = ans[i + 1];
//                break;
//              }
//          }
//          else if(i==ans.size()-1){
//              if(ans[i]>key){
//                  flag=1;
//                  res.first=ans[i-1];
//                  res.second=ans[i];
//                  break;
//              }
//              flag=1;
//              res.first=ans[i-1];
//              res.second=-1;
//              break;
//          }
//          else if(i>0 && i<ans.size()-1){
//               if(ans[i]>key){
//                  flag=1;
//                  res.first=ans[i-1];
//                  res.second=ans[i];
//                  break;
//               } else {
//                  flag = 1;
//                  res.first = ans[i - 1];
//                  res.second = ans[i + 1];
//                  break;
//               }
//          }
//        }
//     }

//     if(flag==0){
//         res.first=ans.back();
//         res.second=-1;
//     }

//     return res;
// }