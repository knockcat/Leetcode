// 530.✅ Minimum Absolute Difference in BST

class Solution
{

    void inorder(TreeNode *root, vector<int> &v)
    {
        if (!root)
            return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }

public:
    int getMinimumDifference(TreeNode *root)
    {
        int mi = INT_MAX;

        vector<int> v;
        inorder(root, v);
        for (int i = 0; i < v.size() - 1; ++i)
        {
            mi = min(v[i + 1] - v[i], mi);
        }
        return mi;
    }
};
