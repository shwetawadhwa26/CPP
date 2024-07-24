
class Solution
{
public:
    int getlength(ListNode *head)
    {
        int len = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }
    ListNode *middleNode(ListNode *head)
    {
        int n = getlength(head);
        int position = n / 2 + 1;
        int currPos = 1;
        ListNode *temp = head;
        while (currPos != position)
        {
            currPos++;
            temp = temp->next;
        }
        return temp;
    }
};