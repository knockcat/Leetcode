//✅ 92. Reverse Linked List II

/*
Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.



Example 1:


Input: head = [1,2,3,4,5], left = 2, right = 4
Output: [1,4,3,2,5]
Example 2:

Input: head = [5], left = 1, right = 1
Output: [5]
*/

class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (head == NULL)
            return NULL;

        ListNode *curr = head, *prev = NULL;
        while (left > 1)
        {
            prev = curr;
            curr = curr->next;
            left--;
            right--;
        }

        ListNode *start = prev, *tail = curr;
        ListNode *temp = NULL;

        while (right > 0)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            right--;
        }
        if (start != NULL)
            start->next = prev;
        else
            head = prev;

        tail->next = curr;

        return head;
    }
};