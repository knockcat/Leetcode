// 24.✅ Swap Nodes in Pairs

class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode *temp = head;

        while (temp)
        {
            if (temp->next != NULL)
            {
                swap(temp->val, temp->next->val);
                temp = temp->next->next;
            }
            else
                break;
        }

        return head;
    }
};