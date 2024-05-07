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
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = nullptr;
        
        while(head)
        {
            ListNode* nex = head->next;
            head->next = prev;
            prev = head;
            head = nex;
        }
        return prev;
    }
    
    ListNode* add(ListNode* head)
    {
        ListNode* temp = head, *prev = nullptr;
        
        int carry = 0;
        
        while(temp)
        {
            prev = temp;
            int sum = 0;
            sum += (2 * temp->val) + carry;
            temp->val = (sum%10);
            carry = sum / 10;
            temp = temp->next;
        }
        
        if(carry)
        {
            prev->next = new ListNode (carry);
        }
        
        return head;
    }
    
    ListNode* doubleIt(ListNode* head) {
        
       head = reverse(head);
        
       head = add(head);
        
       return reverse(head);
        
    }
};