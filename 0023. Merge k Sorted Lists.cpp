// 23.✅ Merge k Sorted Lists

class Solution
{
    ListNode *merge2lists(ListNode *l1, ListNode *l2)
    {
        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;

        ListNode *head = NULL;

        if (l1->val <= l2->val)
            head = l1;
        else
            head = l2;

        if (l1->val <= l2->val)
            head->next = merge2lists(l1->next, l2);
        else
            head->next = merge2lists(l1, l2->next);

        return head;
    }

public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        if (lists.size() == 0)
            return NULL;

        ListNode *head = lists[0];

        for (int i = 1; i < lists.size(); ++i)
        {
            head = merge2lists(head, lists[i]);
        }

        return head;
    }
};