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
        
        unordered_map<Node*, Node*> mp;
        
        Node* temp = head;
        
        while(temp)
        {
            Node* newNode = new Node(temp->val);
            mp.insert({temp, newNode});
            temp = temp->next;
        }
        
        temp = head;
        
        while(temp)
        {
            mp[temp]->random = (temp->random ? mp[temp->random] : nullptr);
            mp[temp]->next = (temp->next ? mp[temp->next] : nullptr);
            temp = temp->next;
        }
        
        return mp[head];
    }
};