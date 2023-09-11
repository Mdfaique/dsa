// link=https://www.codingninjas.com/studio/problems/normal-bst-to-balanced-bst_920472?leftPanelTab=0

// Sample Input 1:
// 10 6 -1 4 -1 -1 -1
// Sample Output 1:
// 4 6 10


// void inOrder(TreeNode<int>* &root,vector<int> &sorted){
//     if(root==NULL)return;
//     inOrder(root->left,sorted);
//     sorted.push_back(root->data);
//     inOrder(root->right,sorted);
// }

// TreeNode<int>* solve(vector<int> &sorted,int start,int end){
//     if(start>end) return NULL;
    
//     int mid=(start+end)/2;
//     TreeNode<int>* root=new TreeNode<int>(sorted[mid]);
//     root->left=solve(sorted,start,mid-1);
//     root->right=solve(sorted,mid+1,end);

//     return root;
// }


// TreeNode<int>* balancedBst(TreeNode<int>* root) {
//     // Write your code here.
//     vector<int> sorted;
//     inOrder(root, sorted);
//     TreeNode<int>* root2=solve(sorted,0,sorted.size()-1);

//     return root2;
    
// }
