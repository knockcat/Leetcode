/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* dummy = new ListNode(), *ptr = dummy;
        
        int curSum = 0;
        
        head = head->next;
        
        while(head)
        {
            curSum += head->val;
            if(head->val == 0)
            {
                head->val = curSum;
                ptr->next = head;
                ptr = ptr->next;
                curSum = 0 ;
            }
            head = head->next;
        }
        
        ptr->next = nullptr;
        
        return dummy->next;
        
    }
};