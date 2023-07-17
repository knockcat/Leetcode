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
    
private:
    ListNode* reverseList(ListNode *head)
    {
        ListNode* prev = nullptr;
        
        while(head)
        {
            ListNode* temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        return prev;
    }
    
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     
        l1 = reverseList(l1);
        l2 = reverseList(l2);
        
        ListNode* dummy = new ListNode(0);
        ListNode* ptr = dummy;
        
        int carry = 0;
        
        while(l1 or l2)
        {
            int sum = carry;
            
            if(l1)
            {
                sum += l1->val;
                l1 = l1->next;
                
            }
            if(l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            
           
            carry = sum/10;
            
            ListNode* cur = new ListNode(sum % 10);
            
            ptr->next = cur;
            ptr = ptr->next;
        }
        
        if(carry)
        {
            ListNode* cur = new ListNode(carry);
            
            ptr->next = cur;
            ptr = ptr->next;
        }
        
        ListNode* ans = reverseList(dummy->next);
        
        return ans;
        
    }
};