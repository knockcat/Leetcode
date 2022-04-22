// 230.✅ Kth Smallest Element in a BST

class Solution
{
public:
    void inorder(TreeNode *root, vector<int> &v)
    {
        if (root)
        {
            inorder(root->left, v);
            v.push_back(root->val);
            inorder(root->right, v);
        }
    }

    int kthSmallest(TreeNode *root, int k)
    {
        vector<int> v;

        inorder(root, v);

        return v[k - 1];
    }
};

class Solution
{
public:
    int kthSmallest(TreeNode *root, int &k)
    {
        if (root == NULL)
            return 0;
        int left = kthSmallest(root->left, k);
        if (left)
            return left;
        k--;
        if (k == 0)
            return root->val;
        int right = kthSmallest(root->right, k);
        if (right)
            return right;
        return 0;
    }
};