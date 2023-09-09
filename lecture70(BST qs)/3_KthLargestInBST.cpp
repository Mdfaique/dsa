
// void solve(BinaryTreeNode<int>* root, int k,int &count,int &ans,int size){
//     if(root==NULL) return;
    
//     solve(root->left,k,count,ans,size);
//     count++;
//     if(count==size-k+1){
//         ans=root->data;
//     }
//     solve(root->right,k,count,ans,size);


// }

// void findSize(BinaryTreeNode<int>* root,vector<int> &sizeA){
//     if(root==NULL) return;
//     findSize(root->left,sizeA);
//     sizeA.push_back(root->data);
//     findSize(root->right,sizeA);
// }

// int kthLargest(BinaryTreeNode<int>* root, int k) {
//     // Write your code here.
//     vector<int> sizeA;
//     findSize(root,sizeA);
//     int sizeV=sizeA.size();
//     int count=0;
//     int ans=-1;
//     solve(root,k,count,ans,sizeV);

//     return ans;
    

// }