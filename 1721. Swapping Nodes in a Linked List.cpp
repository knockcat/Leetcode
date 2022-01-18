1721. ✅Swapping Nodes in a Linked List

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL)
            return NULL;
        
        int beg = k;
        int cnt = 0;
        ListNode *temp = new ListNode;
        temp = head;
        
        while(temp !=  NULL)
        {
            cnt++;
            temp = temp -> next;
        }
        
        if(cnt == 1)
            return head;
        
        int end = (cnt - k) + 1;                //position of kth node from end
        
        if(beg == 1 && end == cnt-1)
        {
            swap(head->val,temp->val);
            
        }
        
        else
        {
            temp = head;
            ListNode *ptr = new ListNode;
            ptr = head;
        
            while(beg > 1)
            {
                temp = temp -> next;
                beg--;
            }
            while(end > 1)
            {
                ptr = ptr->next;
                end--;
            }
        
            swap(ptr -> val, temp -> val);
        }
        return head;
    }
};