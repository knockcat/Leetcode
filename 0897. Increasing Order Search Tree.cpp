// 897.✅ Increasing Order Search Tree

class Solution
{
public:
    void inorder(TreeNode *&ans, TreeNode *root)
    {
        if (!root)
            return;
        inorder(ans, root->left);
        ans->right = new TreeNode(root->val);
        ans = ans->right;
        inorder(ans, root->right);
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        TreeNode *temp;
        TreeNode *ans = new TreeNode();
        temp = ans;
        inorder(ans, root);
        return temp->right;
    }
};
