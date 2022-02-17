// 1038.✅ Binary Search Tree to Greater Sum Tree

class Solution
{

    void solve(TreeNode *root, int &sum)
    {
        if (root == NULL)
            return;
        solve(root->right, sum);
        sum += root->val;
        root->val = sum;
        solve(root->left, sum);
    }

public:
    TreeNode *bstToGst(TreeNode *root)
    {

        int sum = 0;

        solve(root, sum);

        return root;
    }
};
