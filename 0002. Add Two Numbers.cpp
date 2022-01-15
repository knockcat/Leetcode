// 2. Add Two Numbers

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ptr = new ListNode();     //new list;
        ListNode *temp = ptr;
        
        int c = 0;
        while (l1 != NULL ||  l2 != NULL || c)
        {
            int sum = 0;
            if(l1 != NULL)
            {
                sum += l1->val;
                l1 = l1 -> next;
            }
            
            if(l2 != NULL)
            {
                sum += l2->val;
                l2 = l2 -> next;
            }
            
            sum += c;
            c = sum/10;
            ListNode *node = new ListNode(sum%10);
            temp -> next = node;
            temp = temp -> next;
        }
        return ptr -> next;
    }
};
