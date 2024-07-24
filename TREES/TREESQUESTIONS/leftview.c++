#include <iostream>
#include<queue>
#include<map>
using namespace std;

class Node{
  public:
	int data;
	Node* left;
	Node* right;


	Node(int val) {
	  this->data = val;
	  this->left = NULL;
	  this->right = NULL;
	}
};

Node* createTree() {
  cout << "Enter the value for Node : " ;
  int value;
  cin >> value;

  if(value == -1) {
	return NULL;
  }

  //create Node;
  Node* root = new Node(value);
  cout << "Entering in left of: "<< value << endl;
  root->left = createTree() ;
  cout << "Entering in right of: "<< value << endl;
  root->right = createTree();
  return root;
}

void preOrder(Node* root) {
  if(root == NULL) 
	return;

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right); 
}

void inOrder(Node* root) {
  if(root == NULL) 
	return;   
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right); 
}

void postOrder(Node* root) {
  if(root == NULL) 
	return;
	postOrder(root->left);
	postOrder(root->right); 
	cout << root->data << " ";
}



  }
}

void printLeftView(Node* root, int level, vector<int>& leftView) {
  if(root == NULL) 
	return;

  if(level == leftView.size()) {

	leftView.push_back(root->data);
  }
  printLeftView(root->left, level+1, leftView);
  printLeftView(root->right, level+1, leftView);
}

void printRightView(Node* root, int level, vector<int>& rightView) {
  if(root == NULL) 
	return;

  if(level == rightView.size()) {
	//iska matlab left view ki node milgyi h , store karlo
	rightView.push_back(root->data);
  }
  printRightView(root->right, level+1, rightView);
  printRightView(root->left, level+1, rightView);
}
