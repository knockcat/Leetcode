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
    ListNode* mergeTwoLists(ListNode* node1, ListNode* node2) {
        
            ListNode* dummy = new ListNode();
            ListNode* temp = dummy;

            while(node1 and node2)
            {
                if(node1->val <= node2->val)
                {
                    temp->next = node1;
                    node1 = node1->next;
                }
                else
                {
                    temp->next = node2;
                    node2 = node2->next;
                }
                temp = temp->next;
            }

            if(node1)
                temp->next = node1;
            if(node2)
                temp->next = node2;


            return dummy->next;
            
        
    }
};