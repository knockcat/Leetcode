147. Insertion Sort List

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode *start = new ListNode();
        start-> next = head;
        
        ListNode *curr = head,*prev = start;
        
        while(curr)
        {
            if(curr->next && (curr->next->val < curr->val))
            {
                while(prev->next && (prev->next->val < curr->next->val))
                    prev = prev->next;
                ListNode *temp = prev->next;
                prev->next = curr->next;
                curr->next = curr->next->next;
                prev->next->next = temp;
                prev = start;
            }
            else
                curr = curr->next;
        }
        return start->next;
    }
};