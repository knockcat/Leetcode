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
    
    int add(ListNode* head)
    {
        if(!head)
            return 0;
        
        int sum = (head->val * 2) + add(head->next);
        
        head->val = sum % 10;
        
        return sum / 10;
    }
    
    ListNode* doubleIt(ListNode* head) {
        
        int carry = add(head);
        
        if(carry)
            head = new ListNode(carry, head);
        
        return head;
        
    }
};