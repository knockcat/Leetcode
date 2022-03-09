// 82.✅ Remove Duplicates from Sorted List II

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        // if list contains no node
        if (!head)
            return 0;
        // if list containg a single node return head
        if (!head->next)
            return head;

        // keepitn val of head in a temp variable var.
        int val = head->val;
        // temp contain the reference of next  node
        ListNode *temp = head->next;

        // if the next node have different value then,
        // update head->next by temp(temp contains reference to next node)
        if (temp->val != val)
        {
            head->next = deleteDuplicates(temp);
            return head;
        }
        else
        {
            // if the values are same just update temp to temp->next;
            while (temp && temp->val == val)
            {
                // assigning temp to p
                ListNode *p = temp;
                // updating temp with next node
                temp = temp->next;
                // freeing the memory
                delete p;
            }
            return deleteDuplicates(temp);
        }
    }
};