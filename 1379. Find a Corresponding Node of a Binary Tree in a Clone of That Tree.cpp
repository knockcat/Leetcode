// 1379.✅ Find a Corresponding Node of a Binary Tree in a Clone of That Tree

class Solution
{
public:
    TreeNode *ans = NULL;
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
    {

        if (!original && !cloned)
            return NULL;

        if (original->val == target->val)
        {
            ans = cloned;
        }

        getTargetCopy(original->left, cloned->left, target);
        getTargetCopy(original->right, cloned->right, target);

        return ans;
    }
};