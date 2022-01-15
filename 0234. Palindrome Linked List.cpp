234. Palindrome Linked List

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector <int> v;
        vector <int> v1;
        int i = 0;
        
        while(head != NULL){
            v.push_back(head->val);
            head = head->next;
            v1.push_back(v[i]);
            i++;
        }
        
        reverse(v.begin(),v.end());
        
        for(int i = 0; i<v.size(); i++)
        {
            if(v[i] != v1[i])
                return false;
        }
        
        return true;
    }
};