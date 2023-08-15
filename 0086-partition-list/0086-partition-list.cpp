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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* leftHead = new ListNode(0);
        ListNode* rightHead = new ListNode(0);
        
        ListNode* dummy = head, *left = leftHead, *right = rightHead;
        
        while(dummy)
        {
            if(dummy->val < x)
            {
                left->next = new ListNode(dummy->val);
                left = left->next;
            }
            else
            {
                right->next = new ListNode(dummy->val);
                right = right->next;
            }
            
            dummy = dummy->next;
        }
        
        right->next = nullptr;
        
        left->next = rightHead->next;
        
        return leftHead->next;
    }
};