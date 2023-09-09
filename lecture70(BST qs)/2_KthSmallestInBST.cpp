// link=https://www.codingninjas.com/studio/problems/find-k-th-smallest-element-in-bst_1069333?leftPanelTab=1


// void solve(BinaryTreeNode<int>* root, int k,int &count,int &ans){
//     if(root==NULL) return;
    
//     solve(root->left,k,count,ans);
//     count++;
//     if(count==k){
//         ans=root->data;
//     }
//     solve(root->right,k,count,ans);


// }

// int kthSmallest(BinaryTreeNode<int>* root, int k) {
//     // Write your code here.
//     int count=0;
//     int ans=-1;
//     solve(root,k,count,ans);

//     return ans;
// }