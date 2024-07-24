#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
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
    int getlength(Node *head)
    {
        Node *temp = head;
        int count = 0;
        while (temp != 0)
        {
            count++;
            temp = temp->next;
        }
        return count;
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
            Node *temp = new Node(data);
            temp->next = head;
            head = temp;
        }
    }
    int insertatail(Node *&head, Node *&tail, int data)
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
            temp->next = tail;
            tail = temp;
        }
    }
};
int main()
{

    return 0;
}