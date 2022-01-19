// 237.✅ Delete Node in a Linked List

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *temp = new ListNode;
        
        temp = node -> next;
        
        node -> val = temp -> val;
        
        node -> next = temp -> next;
        
        delete temp;
    }
};