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