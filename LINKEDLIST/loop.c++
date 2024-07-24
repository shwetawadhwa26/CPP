#include <iostream>
using namespace std;
bool checkloop(Node *&head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL)
    {
        fast = fast->next;
        i(fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    // check for loop
    if (fast == slow)
    {
        return true;
    }
}
return false;
int main()
{

    return 0;
}