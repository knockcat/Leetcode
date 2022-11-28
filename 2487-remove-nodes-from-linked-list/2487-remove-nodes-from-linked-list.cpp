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
    
    ListNode* rev(ListNode* head){
        ListNode* prev = nullptr, *curr = head;
        while(curr != nullptr)
        {
            swap(curr->next,prev);
            swap(prev,curr);
        }
        return prev;
    }
    
    ListNode* reverseList(ListNode* head){
        ListNode* prev = nullptr, *curr = head;
        while(curr != nullptr)
        {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    
    void delete_Node(ListNode* head)
    {
        ListNode *maxNode = head,  *curr = head;
        
        while(curr && curr->next)
        {
            if(curr->next->val < maxNode->val)
            {
                ListNode* temp = curr->next;
                curr->next = temp->next;
                delete(temp);
            }
            else
            {
                curr = curr->next;
                maxNode = curr;
            }
        }
    }
    
    ListNode* removeNodes(ListNode* head) {
        
        head = reverseList(head);
        delete_Node(head);
        head = reverseList(head);
        return head;
    }
};