/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(!head)
            return nullptr;
        
        Node*temp = head;
        
        while(temp)
        {
            Node* newNode = new Node(temp->val);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = newNode->next;
        }
        
        temp = head;
        
        while(temp)
        {
            temp->next->random = (temp->random ? temp->random->next : nullptr);
            temp = temp->next->next;
        }
        
        temp = head;
        Node* ans = temp->next, *ptr = temp->next;
        
        while(temp)
        {
            temp->next = ptr->next;
            temp = temp->next;
            if(!temp)
                break;
            ptr->next = temp->next;
            ptr = ptr->next;
        }
        
        return ans;
    }
};