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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        ListNode* prev = nullptr;
        
        int leftEnd = -1, nearestEnd = -1;
        int minDist = INT_MAX, maxDist = INT_MIN;
        int pos = 1;
        
        while(head)
        {
            if(head->next and prev)
            {
                if((prev->val < head->val and head->next->val < head->val) or (prev->val > head->val and head->next->val > head->val))
                {
                    if(leftEnd == -1)
                    {
                        leftEnd = pos;
                        nearestEnd = pos;
                    }
                    else
                    {
                        minDist = min(minDist, pos - nearestEnd);
                        maxDist = max(maxDist, pos - leftEnd);
                        nearestEnd = pos;
                    }
                }
            }
            prev = head;
            head = head->next;
            ++pos;
        }
        
        if(minDist == INT_MAX or maxDist == INT_MIN)
            return {-1, -1};
        return {minDist, maxDist};
    }
};