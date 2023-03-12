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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<int,vector<int>,greater<int>> pq;
        
        for(auto itr : lists)
        {
            while(itr)
            {
                pq.push(itr->val);
                itr = itr->next;
            }
        }
        
        ListNode *ptr = new ListNode();
        ListNode *ans = ptr;
        while(!pq.empty())
        {
            ListNode* temp = new ListNode(pq.top());
            ans->next = temp;
            ans = ans->next;
            pq.pop();
        }
        
        return ptr->next;
        
        
    }
};