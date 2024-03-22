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
    bool isPalindrome(ListNode* head) {
        
        ListNode* fast = head, *slow = head;
        
        while(fast and fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        ListNode* nexHalf = slow;
        
        ListNode* prev = nullptr;
        
        while(nexHalf)
        {
            ListNode* nex = nexHalf->next;
            nexHalf->next = prev;
            prev = nexHalf;
            nexHalf = nex;
        }
        
        while(head != slow)
        {
            if(head->val != prev->val)
                return false;
            head = head->next;
            prev = prev->next;
        }
        
        return true;
        
    }
};