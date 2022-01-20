// 160.✅ Intersection of Two Linked Lists

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL && headB==NULL)
            return NULL;
        ListNode *ptr1 = headA, *ptr2 = headB;
        
        while(ptr1 != NULL && ptr2 != NULL && ptr1 != ptr2)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            
            if(ptr1 == ptr2)
                return ptr1;
            
            if(ptr1 == NULL)
                ptr1 = headB;
            if(ptr2 == NULL)
                ptr2 = headA;
        }
        return ptr1;
    }
};