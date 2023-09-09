// link=https://www.codingninjas.com/studio/problems/lca-in-a-bst_981280?leftPanelTab=1


// TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
// {
//     // Write your code here.
//     if(root==NULL) return NULL;

//     if(root->data < P->data && root->data < Q->data){
//         return LCAinaBST(root->right,P,Q);
//     }

    
//     if(root->data > P->data && root->data > Q->data){
//         return LCAinaBST(root->left,P,Q);
//     }

//     return root;
// }