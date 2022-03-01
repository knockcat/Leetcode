// 671. Second Minimum Node In a Binary Tree

class Solution
{
public:
    set<int> ans;
    void inorder(TreeNode *root)
    {
        if (root != NULL)
        {
            inorder(root->left);
            ans.insert(root->val);
            inorder(root->right);
        }
    }

    int findSecondMinimumValue(TreeNode *root)
    {

        inorder(root);

        if (ans.size() < 2)
            return -1;

        auto it = ans.begin();

        ++it;

        return *it;
    }
};