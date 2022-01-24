// 61.✅ Rotate List

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       
        ListNode *temp = head, *ptr = head;
        if(head == NULL)
            return NULL;
        if(head -> next == NULL)
            return head;
        int cnt = 1;
        while(temp->next != NULL)
        {
            temp = temp -> next;
            cnt++;
        }
        k = k % cnt;
        
        while(k--)
        {
            while(temp->next != NULL)
                temp = temp -> next;
        
            temp -> next = head;           //making it a circular linked list
        
            head = temp;
            ptr = temp;
        
            while(temp -> next != head)
            {
                temp = temp -> next;
            }
                temp -> next = NULL;
            temp = ptr;
            
        }
        return head;
    }
};