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
// it returns root node of created tree
Node *createTree()
{
    cout << "enter the value for Node: " << endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    // Step 1:create node
    Node *root = new Node(data);
    // Step 2:create left subtree
    // cout << "Left of Node: " << root->data << endl;
    root->left = createTree();
    // Step 3:create right subtree
    // cout << "Right of Node: " << root->data << endl;
    root->right = createTree();
    return root;
}
void PostorderTraversal(Node *root)
{
    // LRN
    // base case
    if (root == NULL)
    {
        return;
    }
    // L
    PostorderTraversal(root->left);
    // R
    PostorderTraversal(root->right);
    // N
    cout << root->data << " ";
}
int main()
{

    Node *root = createTree();
    cout << root->data << endl;
    cout << "Printing preorder:";
    PostorderTraversal(root);
    cout << endl;

    return 0;
}