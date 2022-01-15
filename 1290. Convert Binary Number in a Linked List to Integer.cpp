class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        while(head)
        {
            ans = ans * 2;
            ans += head->val;
            head = head->next;
            
        }
        return ans;
    }
};