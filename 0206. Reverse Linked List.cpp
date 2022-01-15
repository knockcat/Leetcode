206. Reverse Linked List

class Solution {
public:
    ListNode *h;
    void solve(ListNode *node, ListNode *prev){
        if(node){
            solve(node->next,node);
            node->next = prev;
        }
        else
            h = prev;
    }
    
    ListNode* reverseList(ListNode* head) {
        solve(head,NULL);
        return h;
    }
};