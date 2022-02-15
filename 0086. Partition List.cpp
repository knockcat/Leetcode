// 86.✅ Partition List

class Solution
{
public:
    ListNode *partition(ListNode *head, int x)
    {

        if (head == NULL || head->next == NULL)
            return head;

        vector<int> ans;

        ListNode *ptr = head;

        while (ptr != NULL)
        {
            ans.push_back(ptr->val);
            ptr = ptr->next;
        }

        vector<int> res;
        for (int val : ans)
        {
            if (val < x)
                res.push_back(val);
        }

        for (int val : ans) // by this order is maintained
        {
            if (val >= x)
                res.push_back(val);
        }

        ptr = head;
        int i = 0;

        while (ptr != NULL)
        {
            ptr->val = res[i++];
            ptr = ptr->next;
        }
        return head;
    }
};