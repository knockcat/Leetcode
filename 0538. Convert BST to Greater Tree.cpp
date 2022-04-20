// 538.✅ Convert BST to Greater Tree

class Solution
{
public:
    void helper(TreeNode *root, int &total)
    {
        if (!root)
            return;
        helper(root->right, total);
        total += root->val;
        root->val = total;
        helper(root->left, total);
    }

    TreeNode *convertBST(TreeNode *root)
    {
        int total = 0;
        helper(root, total);
        return root;
    }
};
