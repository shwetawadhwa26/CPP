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
Node *createtree()
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    root->left = createtree();
    root->right = createtree();
    return root;
}
// NLR
void preordertraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}
// LNR
void inordertraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inordertraversal(root->left);
    cout << root->data << " ";
    inordertraversal(root->right);
}

// LRN

void postordertraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout << root->data << " ";
}
int main()
{
    Node *root = createtree();
    cout << root->data << endl;
    inordertraversal(root);
    cout << endl;
    preordertraversal(root);
    cout << endl;
    postordertraversal(root);
    cout << endl;

    return 0;
}