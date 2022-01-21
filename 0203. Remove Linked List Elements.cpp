// 203.✅ Remove Linked List Elements

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode *ptr = new ListNode(-1), *prev = ptr;
        ptr->next = head;
        while(head != NULL)
        {
            if(head ->val != val)
                prev = head;            // just update prev node
            else
                prev -> next = head->next;
            
            head = head ->next;
        }
        return ptr->next;
    }
};

