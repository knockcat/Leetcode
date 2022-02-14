// 1325.✅ Delete Leaves With a Given Value

class Solution
{
public:
    TreeNode *removeLeafNodes(TreeNode *root, int target)
    {
        if (root->left != NULL)
            root->left = removeLeafNodes(root->left, target);
        if (root->right != NULL)
            root->right = removeLeafNodes(root->right, target);
        if (root->left == NULL && root->right == NULL && root->val == target)
            return NULL;

        return root;
    }
};