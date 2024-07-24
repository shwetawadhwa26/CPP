#include <iostream>
#include <cstdlib> // for abs()
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

bool balanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    int left = height(root->left);
    int right = height(root->right);
    int diff = abs(left - right);
    bool ans = (diff <= 1);
    bool leftans = balanced(root->left);
    bool rightans = balanced(root->right);
    return ans && leftans && rightans;
}

int main()
{
    Node *root = createTree();
    if (balanced(root))
    {
        cout << "The tree is balanced." << endl;
    }
    else
    {
        cout << "The tree is not balanced." << endl;
    }
    return 0;
}
