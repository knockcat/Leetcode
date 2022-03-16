// 109.✅ Convert Sorted List to Binary Search Tree

class Solution
{
public:
    TreeNode *sortedListToBST(ListNode *head)
    {
        if (head == NULL)
            return NULL;
        if (head->next == NULL)
        {
            TreeNode *root = new TreeNode(head->val);
            return root;
        }

        ListNode *slow = head, *fast = head->next;

        while (fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *mid = slow->next;
        slow->next = NULL;

        TreeNode *root = new TreeNode(mid->val);
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(mid->next);

        return root;
    }
};