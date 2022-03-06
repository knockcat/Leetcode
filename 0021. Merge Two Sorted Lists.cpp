// 21. Merge✅ Two Sorted Lists

// Iterative Approach

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;

        ListNode *ptr = list1;
        if (list1->val > list2->val)
        {
            ptr = list2;
            list2 = list2->next;
        }
        else
        {
            list1 = list1->next;
        }
        ListNode *curr = ptr;

        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                curr->next = list1;
                list1 = list1->next;
            }
            else
            {
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;
        }
        if (!list1)
            curr->next = list2;
        else
            curr->next = list1;

        return ptr;
    }
};

// Recursive Approach

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (l1 == NULL)
        {
            return l2;
        }
        if (l2 == NULL)
        {
            return l1;
        }
        if (l1->val <= l2->val)
        {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};