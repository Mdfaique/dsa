#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter Data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter Data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
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

void InOrder(node *root) // LNR
{
    // base case
    if (root == NULL)
        return;

    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

void PreOrder(node *root) // NLR
{
    // base case
    if (root == NULL)
        return;

    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(node *root) // LRN
{
    // base case
    if (root == NULL)
        return;

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(node *&root)
{
    queue<node *> q;
    cout << "ENter Data for Root " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "Enter left node for " << temp->data << endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for " << temp->data << endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;

    // root = buildTree(root);

    // // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // levelOrderTraversal(root);

    // cout << "Inorder Traversal is: ";
    // InOrder(root);
    // cout << endl;

    // cout << "Preorder Traversal is: ";
    // PreOrder(root);
    // cout << endl;

    // cout << "Postorder Traversal is: ";
    // PostOrder(root);
    // cout << endl;

    // ---------------OR-------------------
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    // -------------OR--------------
}