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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        vector<ListNode*> ans(k, nullptr);
        
        if(!head)
            return ans;
        
        ListNode* temp = head;
        
        int counter = 0 ;
        
        while(temp)
        {
            ++counter;
            temp = temp->next;
        }
        
        int part = counter / k, extra = counter % k;
        
        int idx = 0;
        
        temp = head;
        
        ListNode* prev = temp, *nextNode = nullptr;
        
        
        if(k >= counter)
        {
            while(temp)
            {
               temp = temp->next;
               prev->next = nullptr;
               ans[idx++] = prev;
               prev = temp;
            }
            
            return ans;
        }
        
        counter = 1;
        
        while(temp)
        {
            if(counter == part)
            {
                if(extra)
                {
                    nextNode = temp->next->next;
                    
                    temp->next->next = nullptr;
                    
                    --extra;
                }
                else
                {
                    nextNode = temp->next;
                    
                    temp->next = nullptr;
                }
                
                ans[idx++] = prev;
                    
                prev = temp = nextNode;
                    
                counter = 1;
                
                continue;
            }
            
            ++counter;
            temp = temp->next;
            cout<<temp->val<<' ';
        }
        
        if(counter > 1)
            ans[idx++] = prev;
     
        return ans;
    }
};