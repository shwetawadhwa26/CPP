#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    // it's not the first node
    if (data > root->data)
    {
        root->right = insertIntoBST(root->right, data);
    }
    else
    {
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}

void createBST(Node *&root)
{
    cout << "Enter data:" << endl;
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cout << "Enter data:" << endl;
        cin >> data;
    }
}

void levelOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

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
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }
}

void preorder(Node *root)
{
    // NLR
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    // LRN
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void inorder(Node *root)
{
    // LNR
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node *minValue(Node *root)
{
    if (root == NULL)
    {
        cout << "NO MIN VALUE" << endl;
        return NULL;
    }
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
Node *maxValue(Node *root)
{
    if (root == NULL)
    {
        cout << "NO MAX VALUE" << endl;
        return NULL;
    }
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

bool searchInBst(Node *root, int target)
{
    // base case
    if (root == NULL)
    {
        return false;
    }
    if (root->data == target)
    {
        return true;
    }

    bool leftans = false;
    bool rightans = false;
    if (target > root->data)
    {
        rightans = searchInBst(root->right, target);
    }
    else
    {
        leftans = searchInBst(root->left, target);
    }
    return leftans || rightans;
}

Node *findceil(Node *root, int key)
{
    Node *ceil = NULL;
    while (root)
    {
        if (root->data == key)
        {
            ceil = root;
            return ceil;
        }
        if (key > root->data)
        {
            root = root->right;
        }
        else
        {
            ceil = root;
            root = root->left;
        }
    }
    return ceil;
}

Node *findfloor(Node *root, int key)
{
    Node *floor = NULL;
    while (root)
    {
        if (root->data == key)
        {
            floor = root;
            return floor;
        }
        if (key > root->data)
        {
            floor = root;
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    return floor;
}

int main()
{
    Node *root = NULL;
    createBST(root);
    levelOrderTraversal(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    Node *minNode = minValue(root);
    if (minNode == NULL)
    {
        cout << "there is no node in tree" << endl;
    }
    else
    {
        cout << "min value = " << minNode->data;
    }

    Node *maxNode = maxValue(root);
    if (maxNode == NULL)
    {
        cout << "there is no node in tree" << endl;
    }
    else
    {
        cout << "max value = " << maxNode->data;
    }
    // int t;
    // cout << "enter target" << endl;
    // cin >> t;
    // while (t != -1)
    // {
    //     bool ans = searchInBst(root, t);
    //     if (ans == true)
    //     {
    //         cout << "found" << endl;
    //     }
    //     else
    //     {
    //         cout << "not found " << endl;
    //     }
    //     cout << "enter the target: " << endl;
    //     cin >> t;
    // }
    int key;
    cout << "enter key to find " << endl;
    cin >> key;
    Node *ceilNode = findceil(root, key);
    if (ceilNode == NULL)
    {
        cout << " ciel is not found " << endl;
    }
    else
    {
        cout << "ceil value = " << ceilNode->data << endl;
    }

    int keys;
    cout << "enter key to find " << endl;
    cin >> keys;
    Node *floorNode = findfloor(root, keys);
    if (floorNode == NULL)
    {
        cout << " floor is not found " << endl;
    }
    else
    {
        cout << "floor value = " << floorNode->data << endl;
    }

    return 0;
}
