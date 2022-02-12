// 1302.✅ Deepest Leaves Sum

class Solution
{
public:
    int sum = 0;

    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }

    void s(TreeNode *root, int currdepth, int depth)
    {
        if (root == NULL)
            return;

        if (currdepth == depth)
            sum += root->val;

        s(root->left, currdepth + 1, depth);
        s(root->right, currdepth + 1, depth);
    }

    int deepestLeavesSum(TreeNode *root)
    {
        int mxdepth = maxDepth(root);

        s(root, 1, mxdepth); // root, currentdepth , maxdepth

        return sum;
    }
};