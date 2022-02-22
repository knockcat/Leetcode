// 2181.✅ Merge Nodes in Between Zeros

class Solution
{
public:
    ListNode *mergeNodes(ListNode *head)
    {

        ListNode *tail = new ListNode(0);
        ListNode *ptr = tail;
        while (head != NULL)
        {
            if (head->val == 0)
                head = head->next;

            if (head == NULL)
                break;
            int sum = 0;
            while (head->val != 0)
            {
                sum += head->val;
                head = head->next;
            }
            tail->next = new ListNode(sum);
            tail = tail->next;
        }
        return ptr->next;
    }
};