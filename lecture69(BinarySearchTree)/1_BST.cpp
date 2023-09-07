#include<iostream>
using namespace std;
#include<queue>

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertInBST(Node* &root,int d){
    // base case
    if(root==NULL){
        root=new Node(d);
        return root;
    }

    if(d >root->data){
        root->right=insertInBST(root->right,d);
    }
    else root->left=insertInBST(root->left,d);

    return root;
}

void takeInput(Node *&root){
    int data;
    cin>>data;
    while(data != -1){
    insertInBST(root,data);
    cin>>data;
    }
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

Node* minVal(Node* &root){
    // if(root==NULL) return NULL;
    // if(root->left == NULL) return root;
    // if(root->left)  return minVal(root->left); 

    Node* temp=root;
    while(temp->left !=NULL){
        temp=temp->left;
    }

    return temp;
}

Node* deleteFromBST(Node* root,int val){
    // base case
    if(root==NULL) return root;

    if(root->data == val){
        // 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // 1child
        // left child only
        if(root->left != NULL && root->right == NULL){
            Node *temp=root->left;
            delete root;
            return temp;
        }

        // 1child
        // right child only
        if(root->left == NULL && root->right != NULL){
            Node *temp=root->right;
            delete root;
            return temp;
        }

        // 2child
        if(root->left != NULL && root->right != NULL){
            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
            return root; 
        }
    }
    else if(root->data > val){
        // left part me jaao
        root->left=deleteFromBST(root->left,val);
        return root;
    }
    else {
        root->right=deleteFromBST(root->right,val);
        return root;
    }
}

int main(){

    Node *root=NULL;
    
  
    cout<<"enter Data to build BST "<<endl;
    takeInput(root);

    cout<<"printing the BST "<<endl;
    levelOrderTraversal(root);
    
    root=deleteFromBST(root,50);
    
    cout<<"printing the BST after deletion "<<endl;
    levelOrderTraversal(root);

    return 0;
}

// 36:47
// 50 20 70 10 30 90 110 -1