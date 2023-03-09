/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head ==  NULL ||  head -> next == NULL)
            return NULL;
        ListNode *slow = head,*fast = head, *temp = head;
       
        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if(fast == slow)        //cycle || loop
            {
               while(slow != temp)
               {
                   slow = slow -> next;
                   temp = temp -> next;
               }
                return temp ;
            }
               
        }
         
   
        return NULL;
    }
};