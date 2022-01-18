19.✅ Remove Nth Node From End of List

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = new ListNode;                 //Allocating Memory For New Node using new Keyword;
        temp = head;                                   //Initializing it to head;
        int cnt = 0;
        
        while(temp != NULL)
        {
            cnt++;
            temp = temp->next;
        }
        
        if(cnt == 0)
            return head;
        
        int cnt_first = (cnt - n) + 1;               //position of nth node from head
        
        head = Delete(head , cnt_first , cnt);       //function Delete to Delete the Node
        
        return head;
    }
    
    ListNode *Delete(ListNode *head, int  pos,int cnt)
    {
        if(head == NULL)
            return head;
        
        //If Deleted Node happen to be first Node
        else if(head != NULL && pos == 1)
        {
            ListNode *curr = new ListNode;      //Allocating memory using keyword new & then initializing node to head
            curr = head;
            // ListNode *curr = head;           //C syntax
            head = head -> next;
            // free(curr);                      //C syntax
            delete curr;
            curr = NULL;
        }
        
        //If Deleted Node happen to be Last Node
        else if(head != NULL && pos == cnt )    
        {
            ListNode *curr = new ListNode;      //Allocating memory using keyword new & then initializing node to head;
            curr = head;
            while (curr->next->next != NULL)
            {
                curr = curr->next;
            }
            ListNode *temp = new ListNode;
            temp = curr->next;
            // free(temp);                      //C syntax
            delete temp;
            temp = NULL;
            curr->next = NULL;
        }
        
        else if(cnt < pos || cnt < 1)
        {
            // cout<<"Not a valid position"<<end;
        }
        
        //If Deleted Node happen to be the Intermediate Node
        else
        {
            ListNode *curr = new ListNode;      //Allocating memory using keyword new & then initializing node to head;
            curr = head;
            ListNode *prev = new ListNode;
            prev = head;
            // ListNode *prev = NULL, *curr = head; //C syntax
            while(pos > 1)
            {
                prev = curr;
                curr = curr -> next;
                pos--;
            }
            prev -> next = curr -> next;
            // free(curr);                      //C syntax
            delete curr;
            curr = NULL;
        }
        
        return head;
    }
};