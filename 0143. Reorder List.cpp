//✅ 143. Reorder List

/*
You are given the head of a singly linked-list. The list can be represented as:

L0 → L1 → … → Ln - 1 → Ln
Reorder the list to be on the following form:

L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
You may not modify the values in the list's nodes. Only nodes themselves may be changed.



Example 1:


Input: head = [1,2,3,4]
Output: [1,4,2,3]
Example 2:


Input: head = [1,2,3,4,5]
Output: [1,5,2,4,3]

*/

class Solution
{
public:
    void reorderList(ListNode *head)
    {
        stack<ListNode *> S;
        ListNode *curr = head;
        while (curr)
        {
            S.push(curr);
            curr = curr->next;
        }

        ListNode *next;
        curr = head;
        int n = S.size();
        if (n <= 2)
            return;
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                next = curr->next;
                curr->next = S.top();
                S.pop();
                curr = curr->next;
                curr->next = next;
                curr = curr->next;
            }
            curr->next = NULL;
        }
    }
};

class Solution
{
public:
    void reorderList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return;
        ListNode *slow = head, *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *prev = NULL, *curr = slow, *temp;
        while (curr != NULL)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        ListNode *n1 = head, *n2 = prev;
        while (n2->next != NULL)
        {
            temp = n1->next;
            n1->next = n2;
            n1 = temp;

            temp = n2->next;
            n2->next = n1;
            n2 = temp;
        }
    }
};