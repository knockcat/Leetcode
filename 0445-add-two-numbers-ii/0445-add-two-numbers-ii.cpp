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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        stack<int> st1;
        stack<int> st2;
        
        while(l1)
        {
            st1.push(l1->val);
            l1 = l1->next;
        }
        
        while(l2)
        {
            st2.push(l2->val);
            l2 = l2->next;
        }
        
        ListNode* dummy = new ListNode(0);
        ListNode* ptr = dummy;
        
        int carry = 0;
        
        while(!st1.empty() or !st2.empty())
        {
            int a = 0, b = 0;
            
            if(!st1.empty())
            {
                a = st1.top();
                st1.pop();
            }
            if(!st2.empty())
            {
                b = st2.top();
                st2.pop();
            }
            
            int sum = (a + b + ptr->val);
            
            ptr->val = sum % 10;
                
            ListNode* cur = new ListNode(sum/10);
            
            cur->next = ptr;
            
            ptr = cur;
        }
        
        return (ptr->val == 0 ? ptr->next : ptr);
    }
};