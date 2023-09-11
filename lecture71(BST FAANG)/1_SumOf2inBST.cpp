// link=https://www.codingninjas.com/studio/problems/two-sum-in-a-bst_1062631?leftPanelTab=1

// Sample Input 1:
// 10 6 12 2 8 11 15 -1 -1 -1 -1 -1 -1 -1 -1
// 14
// Sample Output 1:
// True
// For the first test case, the sum of the nodes with values 2 and 12 equals the target value.

// void inOrder(BinaryTreeNode<int>* root,vector<int> &inOrderVal){
//     if(root==NULL) return;
    
//     inOrder(root->left,inOrderVal);
//     inOrderVal.push_back(root->data);
//     inOrder(root->right,inOrderVal);
// }

// bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
// 	//Write your code here
//     vector<int> inOrderVal;
//     inOrder(root,inOrderVal);
    
//     int i=0; 
//     int j=inOrderVal.size()-1;

//     while(i<j){
//         int sum=inOrderVal[i]+inOrderVal[j];
        
//         if(sum == target) return true;
//         else if(sum>target) j--;
//         else i++;
//     }
    
//     return false;
// }

// 11:50