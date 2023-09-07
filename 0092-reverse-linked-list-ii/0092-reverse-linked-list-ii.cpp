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
    
private:
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr = head, *prev = nullptr;
        
        while(curr)
        {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
    
        return prev;
    }
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(left == right)
            return head;
        
        ListNode* leftNode = nullptr, *rightNode = nullptr;
        
        ListNode* prevLeftNode = nullptr, *nextRightNode = nullptr;
        
        ListNode* curr= head;
        
        int counter = 0;
        
        if(left == 1)
        {
            prevLeftNode = nullptr;
            leftNode = curr;
        }
            
        
        while(curr)
        {
            ++counter;
            
            if(counter == left-1)
            {
                prevLeftNode = curr;
                leftNode = curr->next;
            }
            
            if(counter == right)
            {
                rightNode = curr;
                nextRightNode = curr->next;
            }
            
            curr = curr->next;
        }
        
        if(rightNode)
            rightNode->next = nullptr;
        
        ListNode* rev = reverse(leftNode);
        
        if(prevLeftNode)
            prevLeftNode->next = rev;
        if(nextRightNode)
            leftNode->next = nextRightNode;
        
        if(prevLeftNode)
            return head;
        return rev;
    }
};