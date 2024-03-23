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
    void reorderList(ListNode* head) {
        
        if(!head or !head->next)
            return;
        
        ListNode* slow = head, *fast = head, *first = nullptr;
        
        while(fast and fast->next)
        {
            first = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        first->next = nullptr;
        
        ListNode* prev = nullptr;
        
        while(slow)
        {
            ListNode* nex = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nex;
        }
        
        while(head)
        {
            ListNode* nex = head->next;
            head->next = prev;
            ListNode* nex2 = prev->next;
            if(nex)
                prev->next = nex;
            head = nex;
            prev = nex2;
        }
    }
};