#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int height(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int finalAns = max(leftHeight, rightHeight) + 1;
    return finalAns;
}

bool isBalanced(TreeNode *root)
{
    // base case
    if (root == NULL)
    {
        return true;
    }

    // currNode - solve
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int diff = abs(leftHeight - rightHeight);

    bool currNodeAns = (diff <= 1);

    bool leftAns = isBalanced(root->left);
    bool rightAns = isBalanced(root->right);

    if (currNodeAns && leftAns && rightAns)
    {
        return true;
    }
    else
    {
        return false;
    }
}
}
;

// Function to create a binary tree
Node *createTree()
{
    cout << "Enter the value for Node: " << endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    root->left = createTree();
    root->right = createTree();
    return root;
}

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return max(left, right) + 1;
}

int main()
{
    Node *root = createTree();
    int treeHeight = height(root);
    cout << "Height of the tree is: " << treeHeight << endl;
    return 0;
}
