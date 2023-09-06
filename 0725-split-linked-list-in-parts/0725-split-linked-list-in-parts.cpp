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
        
        vector<ListNode*> result(k, nullptr);
        
        if(!head)
            return result;
        
        int length = 0;
        
        ListNode* curr = head;
        
        while(curr)
        {
            ++length;
            curr = curr->next;
        }
        
        int eachPartitionLength = length / k;
        int extraNodes = length % k;
        
        curr = head;
        
        ListNode* prev = nullptr;
        
        for(int i = 0; i < k; ++i)
        {
            result[i] = curr;
            
            for(int count = 1; count <= eachPartitionLength + (extraNodes > 0 ? 1 : 0); ++count)
            {
                prev = curr;
                curr = curr->next;
            }
            
            prev->next = nullptr;
            --extraNodes;
        }
        
        return result;
        
    }
};