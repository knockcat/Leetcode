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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* temp = list1, *temp2 = list2, *prev = temp2;
        
        while(temp2)
        {
            prev = temp2;
            temp2 = temp2->next;
        }
        
        ListNode* half = nullptr, *nex = nullptr;
        
        int curr = 0;
        
        while(temp)
        {
            ++curr;
            if(curr == a)
            {
                half = temp;
            }
            if(curr == b+2)
            {
                nex = temp;
            }
            temp = temp->next;
        }
        
        half->next = list2;
        prev->next = nex;
        
        return list1;
    }
};