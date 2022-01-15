328. Odd Even Linked List

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
            return NULL;
        
        ListNode *odd = head, *even = head->next;
        
        ListNode *odd_head = head, *even_head = head->next;
        
        while(even && even->next)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        
        odd->next = even_head;
        return odd_head;
    }
};