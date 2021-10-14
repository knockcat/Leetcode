// 98.✅ Validate Binary Search Tree

class Solution
{
public:
    bool helper(TreeNode *root, long mn, long mx)
    {
        if (!root)
            return true;

        if (root->val <= mn || root->val >= mx)
            return false;

        return helper(root->left, mn, root->val) && helper(root->right, root->val, mx);
    }

    bool isValidBST(TreeNode *root)
    {
        return helper(root, LONG_MIN, LONG_MAX);
    }
};
