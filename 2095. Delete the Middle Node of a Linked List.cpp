// 2095.✅ Delete the Middle Node of a Linked List

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL)
            return NULL;
        
        if(head -> next == NULL)
        {
            delete head;
            return NULL;
        }
        
        ListNode *slow = head, *fast = head, *prev  = head;
        
        while(fast != NULL && fast->next != NULL)
        {
            if(slow != head)
                prev = prev -> next;                    //prev to one step behind of slow
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        //updating prev -> next to slow as slow is middle node
        prev->next = slow->next;
        delete slow;
        
        return head;
        
    }
};