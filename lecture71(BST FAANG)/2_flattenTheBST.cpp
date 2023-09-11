// link=https://www.codingninjas.com/studio/problems/flatten-bst-to-a-sorted-list_1169459?leftPanelTab=1

// void inOrder(TreeNode<int>* &root,vector<int> &sorted){
//     if(root==NULL)return;
//     inOrder(root->left,sorted);
//     sorted.push_back(root->data);
//     inOrder(root->right,sorted);
// }
// TreeNode<int>* flatten(TreeNode<int>* root)
// {
//     // Write your code here
//     vector<int> sorted;
//     inOrder(root,sorted);
//     TreeNode<int>* temp=new TreeNode<int>(sorted[0]);
//     TreeNode<int> *temp2=temp;
//     for(int i=1;i<sorted.size();i++){
//        temp2->right=new TreeNode<int>(sorted[i]);
//        temp2->left=NULL;
//        temp2=temp2->right;
//     }

//     return temp;
// }
