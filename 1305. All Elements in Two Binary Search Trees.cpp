// 1305.✅ All Elements in Two Binary Search Trees

class Solution
{
public:
    vector<int> v;
    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {

        preorder(root1);
        preorder(root2);
        sort(v.begin(), v.end());
        return v;
    }

    void preorder(TreeNode *root)
    {
        if (root == NULL)
            return;
        v.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
};

// in inorder travesal the elements are in sorted order in a BST

class Solution
{
public:
    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {
        stack<TreeNode *> s1, s2;
        vector<int> result;

        while (root1 || root2 || !s1.empty() || !s2.empty())
        {
            while (root1)
            {
                s1.push(root1);
                root1 = root1->left;
            }

            while (root2)
            {
                s2.push(root2);
                root2 = root2->left;
            }

            if (s2.empty() || (!s1.empty() && s1.top()->val <= s2.top()->val))
            {
                root1 = s1.top();
                s1.pop();
                result.push_back(root1->val);
                root1 = root1->right;
            }
            else
            {
                root2 = s2.top();
                s2.pop();
                result.push_back(root2->val);
                root2 = root2->right;
            }
        }
        return result;
    }
};