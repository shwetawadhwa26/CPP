// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         this->data = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// // it returns root node of created tree
// Node *createTree()
// {
//     cout << "enter the value for Node: " << endl;
//     int data;
//     cin >> data;
//     if (data == -1)
//     {
//         return NULL;
//     }
//     // Step 1:create node
//     Node *root = new Node(data);
//     // Step 2:create left subtree
//     cout << "Left of Node: " << root->data << endl;
//     root->left = createTree();
//     // Step 3:create right subtree
//     cout << "Right of Node: " << root->data << endl;
//     root->right = createTree();
//     return root;
// }
// int main()
// {
//     Node *root = createTree();

//     return 0;
// }

#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data; // Declare data member
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

void preorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // N
    cout << root->data << " ";
    // L
    preorderTraversal(root->left);
    // R
    preorderTraversal(root->right);
}

void inordertraversal(Node *root)
{
    // LRN
    // base case
    if (root == NULL)
    {
        return;
    }
    // L
    inordertraversal(root->left);
    // N
    cout << root->data << " ";
    // R
    inordertraversal(root->right);
}

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

void levelordertraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        cout << front->data << " ";

        if (front->left != NULL)
        {
            q.push(front->left);
        }
        if (front->right != NULL)
        {
            q.push(front->right);
        }
    }
}

int heightoftree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftheight = heightoftree(root->left);
    int righttheight = heightoftree(root->right);
    int height = max(leftheight, righttheight) + 1;
    return height;
}

int diameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left_height = heightoftree(root->left);
    int right_height = heightoftree(root->right);

    int left_diameter = diameter(root->left);
    int right_diameter = diameter(root->right);

    return max(left_height + right_height + 1, max(left_diameter, right_diameter));
}

int main()
{
    Node *root = createTree();
    cout << root->data << endl;
    cout << "printing prerder : ";
    preorderTraversal(root);
    cout << endl;
    cout << "printing postoreder : ";
    postordertraversal(root);
    cout << endl;
    cout << "printing inorder : ";
    inordertraversal(root);
    cout << endl;
    cout << "printing levelorder : ";
    levelordertraversal(root);
    cout << endl;
    cout << "printing height of the tree :";
    int height = heightoftree(root);
    cout << height << endl;
    cout << "diameter of tree : ";
    int diameters = diameter(root);
    cout << diameters << " ";

    return 0;
}
