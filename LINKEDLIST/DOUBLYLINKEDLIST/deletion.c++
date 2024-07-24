#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->prev = NULL;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int findlength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertathead(Node *&head, Node *&tail, int data)
{
    // CASE 1 - empty linked list
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    // CASE 2 - non empty linked list
    else
    {
        Node *newNode = new Node(data);
        head->prev = newNode;
        newNode->next = head;
        head = newNode; // head=head->prev
    }
}

int insertattail(Node *&head, Node *&tail, int data)
{ // CASE 1 - empty linked list
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    // CASE 2 non empty linked list
    else
    {
        Node *newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode; // tail=tail->next
    }
}
int insertatposition(Node *&head, Node *&tail, int data, int pos)
{ // CASE 1 - empty linked list
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    // CASE 2 - non empty linked list
    else
    {
        int len = findlength(head);
        if (pos == 1)
        {
            insertathead(head, tail, data);
        }
        else if (pos == len + 1)
        {
            insertattail(head, tail, data);
        }
        else
        {
            // create node
            Node *newNode = new Node(data);
            // set prev and curr pointer
            Node *prevNode = NULL;
            Node *currNode = head;
            while (pos != 1)
            {
                pos--;
                prevNode = currNode;
                currNode = currNode->next;
            }
            prevNode->next = newNode;
            newNode->prev = prevNode;
            newNode->next = currNode;
            currNode->prev = newNode;
        }
    }
}

void deletion(Node *&head, Node *&tail, int pos)
{
    int len = findlength(head);
    if (head == NULL)
    {
        cout << "linked is empty. cant delete" << endl;
        return;
    }
    if (head == tail)
    {
        // single element
        Node *temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
        return;
    }
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }
    else if (pos == len)
    {
        Node *prevNode = tail->prev;
        prevNode->next = NULL;
        tail->prev = NULL;
        delete tail;
        tail = prevNode;
    }
    // deletion at a specific position
    else
    {
        Node *prevNode = NULL;
        Node *currNode = head;
        while (pos != 1)
        {
            pos--;
            prevNode = currNode;
            currNode = currNode->next;
        }
        Node *nextNode = currNode->next;
        prevNode->next = nextNode;
        currNode->prev = NULL;
        currNode->next = NULL;
        nextNode->prev = prevNode;
        delete currNode;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertathead(head, tail, 40);
    insertathead(head, tail, 30);
    insertathead(head, tail, 20);
    insertathead(head, tail, 10);
    insertattail(head, tail, 500);
    insertatposition(head, tail, 1000, 5);
    deletion(head, tail, 3);
    print(head);

    return 0;
}