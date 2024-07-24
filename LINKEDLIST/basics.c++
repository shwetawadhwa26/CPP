#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        cout << "hi there i am under default constructor" << endl;
        this->next = NULL;
    }

    Node(int data)
    {
        cout << "hi there i am under default constructor" << endl;
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{

    // creation of node
    // statically object created

    // Node *head = new Node(10);
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node *head = first;
    cout << "Printing the entire LL : " << endl;
    printLL(head);
    return 0;
}