#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        cout << "destructor is called = " << this->data << endl;
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

int insertathead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        // create new node
        Node *temp = new Node(data);
        // attach new node to head node
        temp->next = head;
        // update head
        head = temp;
    }
}

int insertattail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}

void createtail(Node *&head, Node *&tail)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    tail = temp;
}
int findlength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void deleteNode(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "cannot delete, linked list is empty" << endl;
        return;
    }
    int len = findlength(head);

    // Delete from head
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

        // delete first node
    }

    // Delete from tail
    else if (position == len)
    {
        // delete last node
        Node *prev = head;
        while (prev->next != tail)
        {
            prev = prev->next;
        }
        prev->next = NULL;
        delete tail;
        tail = prev;
    }
    // Delete from a specific position

    else
    {
        Node *prev = NULL;
        Node *curr = head;
        while (position != 1)
        {
            position--;
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        // node isolate karo
        curr->next = NULL;
        // delete node
        delete curr;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertathead(head, tail, 10);
    insertathead(head, tail, 20);
    insertathead(head, tail, 30);
    insertathead(head, tail, 40);
    insertathead(head, tail, 50);
    printLL(head);
    cout << endl;

    deleteNode(head, tail, 1);
    printLL(head);
    cout << endl;
    return 0;
}