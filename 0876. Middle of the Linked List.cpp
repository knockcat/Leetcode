876. Middle of the Linked List


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       
        if (head == NULL)
            return head;
        
        ListNode *fast = head,*slow = head;
        
        while(fast != NULL && fast ->next != NULL)
        {
            fast = fast->next->next;
            slow = slow -> next;
        }
        return slow;
    }
};