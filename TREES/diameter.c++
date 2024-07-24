#include <iostream>
#include <algorithm>
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

// Function to calculate the height of a binary tree
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}

// Function to calculate the diameter of a binary tree
int diameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left_height = height(root->left);
    int right_height = height(root->right);

    int left_diameter = diameter(root->left);
    int right_diameter = diameter(root->right);

    return max(left_height + right_height + 1, max(left_diameter, right_diameter));
}

int main()
{
    Node *root = createTree();
    int treeDiameter = diameter(root);
    cout << "Diameter of the tree is: " << treeDiameter << endl;
    return 0;
}
